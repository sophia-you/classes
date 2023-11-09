#include <iostream>
#include <cstring>
#include <vector>
#include "classesParent.h"
#include "videoGames.h"
using namespace std;

/*
 * Name | Sophia You
 * Date | November 8 2023
 * Description |
 * The main method contains the parent class. The user can add, search, or
 * delete items in the media library. 
 */

void addMedia(vector<Parent*> &mediaList);

int main()
{
  char* testTitle = new char[10];
  strcpy(testTitle, "hello");
  VideoGames* test = new VideoGames(testTitle, 2000, testTitle, 3.5);
  cout << test->getTitle() << endl;
  cout << test->getYear() << endl;
  cout << test->getPublisher() << endl;
  cout << test->getRating() << endl;
  delete testTitle;
  delete test;
  
  // This vector will hold all types of media
  vector<Parent*> mediaList;
  
  cout << "Welcome to the media library. Please enter a command." << endl;
  cout << "Type 'add' to add a type of media." << endl;
  cout << "Type 'search' to search for media in a database." << endl;
  cout << "Type 'delete' to delete an item from the library." << endl;
  int max = 80;
  char input[max];
  cin.getline(input, max);
  if (strcmp(input, "add") == 0)
    {
      addMedia(mediaList);
      
    }
  else if (strcmp(input, "search") == 0)
    {
      
    }
  else if (strcmp(input, "delete") == 0)
    {
    }
  
  return 0;
}

// this function takes in user input and puts the media into a vector
void addMedia(vector<Parent*> &mediaList)
{
  int max = 100;
  char input[max];

  cout << "First, enter some basic information." << endl;
  cout << "Title: " << endl;
  char* title = new char[100];
  cin.getline(input, max); // reads in info
  strcpy(title, input);

  cout << "Year Released: " << endl;
  int year = 0;
  cin >> year; // reads in info
  cin.ignore(max, '\n');
  
  // specify the media type
  cout << "Enter one of the following media types. Only use lower case lett\
ers." << endl;
  cout << "video games" << endl;
  cout << "movies" << endl;
  cout << "music" << endl;
  cin.getline(input, max);
       
      if (strcmp(input, "video games") == 0)
        {
	  cout << "Publisher: " << endl;
	  char* publisher = new char[100];
	  cin.getline(input, max); // reads in info
	  strcpy(publisher, input);


	  cout << "Rating: " << endl;
	  float rating = 0;
	  cin >> rating; // reads in info
	  cin.ignore(max, '\n');
	  
	  
	  VideoGames* videoGame = new VideoGames(title, year, publisher, rating); // this goes in the vector
	  videoGame->printGame();
        }
      else if (strcmp(input, "music") == 0)
        {
        }
      else if (strcmp(input, "movies") == 0)
        {
        }
}
