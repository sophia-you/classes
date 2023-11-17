#include <iostream>
#include <cstring>
#include "videoGames.h"
#include "classesParent.h"
using namespace std;

// cpp file for video games
VideoGames::VideoGames() // default constructor
{
  publisher = new char[100]; // char pointer
  rating = 0.0; // float
}

// constructor with fields
VideoGames::VideoGames(char* newtitle, int newyear, char* newpublisher, float newrating): Parent(newtitle, newyear)
{
  publisher = new char[100];
  strcpy(publisher, newpublisher); // user input "newpublisher" goes into the "publisher" field
  rating = newrating;
}

// destructor
VideoGames::~VideoGames()
{
  delete publisher;
}

// returns publisher
char* VideoGames::getPublisher()
{
  return publisher;
}

// returns rating
float VideoGames::getRating()
{
  return rating;
}

// prints all the info
void VideoGames::print()
{
  cout << "" << endl;
  cout << "Type: Video Game" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
  cout << "" << endl;
}
