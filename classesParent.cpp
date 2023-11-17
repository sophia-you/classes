#include <iostream>
#include <cstring>
#include "classesParent.h"
using namespace std;

// cpp file for the parent class
Parent::Parent() // default constructor
{
  title = new char[100];
  year = 0;
  
}

// user sets parent fields
Parent::Parent(char* newtitle, int newyear)
{
  title = new char[100];
  strcpy(title, newtitle); // newtitle, which you passed in, becomes title
  year = newyear;
  
}

Parent::~Parent() // destructor
{
  delete title;
}

char* Parent::getTitle() // returns title
{
  return title; 
}

int Parent::getYear() // returns year
{
  return year;
}

void Parent::print() // virtual function, this doesn't actually get called
{
  cout << title << endl;
  cout << year << endl;
}
