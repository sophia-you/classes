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

// user sets parent fields?
Parent::Parent(char* newtitle, int newyear)
{
  title = new char[100];
  strcpy(title, newtitle); // newtitle, which you passed in, becomes title
  year = newyear;
  
}

char* Parent::getTitle()
{
  return title; 
}

int Parent::getYear()
{
  return year;
}

void Parent::print()
{
  cout << title << endl;
  cout << year << endl;
}
