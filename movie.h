#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <cstring>
#include "classesParent.h"
using namespace std;

//header file for the video games class, which is a child of parent
class Movie : public Parent
{
 public:
  //constructors
  Movie();
  Movie(char*, int, char*, float, float); // title, year, director, duration, rating

  //destructor
  ~Movie();

    // getters
  char* getDirector();
  float getDuration();
  float getRating();

  // print
  void print();

private:
  // fields
  char* director;
  float duration;
  float rating;
};
#endif
