#ifndef PARENT_H
#define PARENT_H
#include <iostream>
#include <cstring>

// header file for the parent class
class Parent
{
public:
  Parent(); // default constructor
  Parent(char*, int); // reads in values provided in the main method
  virtual ~Parent(); // destructor
  char* getTitle(); // returns title
  int getYear(); // returns year
  virtual void print(); // prints all info
 protected: // these can be used by the children
  char* title;
  int year;


};

#endif
