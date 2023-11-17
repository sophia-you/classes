#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "classesParent.h"
using namespace std;

class Music : public Parent
{
 public:
  //constructors
  Music();
  Music(char*, int, char*, float, char*); // title, year, artist, duration, publisher

  //destructor
  ~Music();

  //getters
  char* getArtist();
  float getDuration();
  char* getPublisher();

  //print
  void print();

 private: // fields go here
  char* artist;
  float duration;
  char* publisher;
  
};
#endif
