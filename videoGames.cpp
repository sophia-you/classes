#include <iostream>
#include <cstring>
#include "videoGames.h"
#include "classesParent.h"
using namespace std;

// cpp file for video games
VideoGames::VideoGames() // default constructor
{
  publisher = new char[100];
  rating = 0.0;
}

VideoGames::VideoGames(char* newtitle, int newyear, char* newpublisher, float newrating): Parent(newtitle, newyear)
{
  publisher = new char[100];
  strcpy(publisher, newpublisher);
  rating = newrating;
}

char* VideoGames::getPublisher()
{
  return publisher;
}

float VideoGames::getRating()
{
  return rating;
}

void VideoGames::print()
{
  cout << "Type: Video Game" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
  cout << "" << endl;
}
