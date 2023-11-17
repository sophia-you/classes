#include <iostream>
#include <cstring>
#include "classesParent.h"
#include "movie.h"
using namespace std;

// cpp file for movies
Movie::Movie() //default constructor
{
  director = new char[100];
  duration = 0.0;
  rating = 0.0;
}

// constructor with fields
Movie::Movie(char* newtitle, int newyear, char* newdirector, float newduration, float newrating): Parent(newtitle, newyear)
{
  director = new char[100];
  strcpy(director, newdirector);
  duration = newduration;
  rating = newrating;
}

// destructor
Movie::~Movie()
{
  delete director;
}

char* Movie::getDirector() // returns director
{
  return director;
}

float Movie::getDuration() // returns duration
{
  return duration;
}

float Movie::getRating() // returns rating
{
  return rating;
}

void Movie::print() // prints info
{
  cout << "Type: Movie" << endl;
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
  cout << "Director: " << director << endl;
  cout << "Duration (minutes): " << duration << endl;
  cout << "Rating: " << rating << endl;
  cout << "" << endl;
}



