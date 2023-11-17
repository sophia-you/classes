#ifndef VIDEO_GAMES_H
#define VIDEO_GAMES_H
#include <iostream>
#include <cstring>
#include "classesParent.h"
using namespace std;

//header file for the video games class, which is a child of parent
class VideoGames : public Parent
{
 public:
  //constructors
  VideoGames();
  VideoGames(char*, int, char*, float); // title, year, publisher, rating

  //destructor
  ~VideoGames();
  
  // getters
  char* getPublisher();
  float getRating();

  // print
  void print();
  
private:
  // fields
  char* publisher;
  float rating;
};

#endif
