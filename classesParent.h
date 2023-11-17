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
  virtual ~Parent();
  char* getTitle();
  int getYear();
  virtual void print();
 protected: // these can be used by the children
  char* title;
  int year;


};

#endif
