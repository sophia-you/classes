#include <iostream>
#include <cstring>
#include "classesParent.h"
#include "music.h"
using namespace std;

// cpp file for music
Music::Music() //default constructor
{
  artist = new char[100];
  duration = 0.0;
  publisher = new char[100];
}

// constructor with fields
Music::Music(char* newtitle, int newyear, char* newartist, float newduration, char* newpublisher): Parent(newtitle, newyear)
{
  artist = new char[100];
  strcpy(artist, newartist);
  duration = newduration;
  publisher = new char[100];
  strcpy(publisher, newpublisher);
}

// destructor
Music::~Music()
{
  delete artist;
  delete publisher;
}

// returns the artist name
char* Music::getArtist()
{
  return artist;
}

// returns song duration
float Music::getDuration()
{
  return duration;
}

// returns publisher
char* Music::getPublisher()
{
  return publisher;
}

void Music::print()
{
  cout << "Type: Music" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Artist: " << artist << endl;
  cout << "Duration (minutes): " << duration << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "" << endl;
}

