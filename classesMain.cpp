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

void addMedia(vector<Parent*> &mediaList)

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
      cout << "Enter one of the following media types. Only use lower case letters." << endl;
      cout << "video games" << endl;
      cout << "music" << endl;
      cout << "movies" << endl;
      cin.getline(input, max);
      if (strcmp(input, "video games") == 0)
	{
	}
      else if (strcmp(input, "music") == 0)
        {
        }
      else if (strcmp(input, "movies") == 0)
	{
	}
      
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
  int max = 80;
  char input[max];

  // specify the media type
   cout << "Enter one of the following media types. Only use lower case lett\
ers." << endl;
      cout << "video games" << endl;
      cout << "music" << endl;
      cout << "movies" << endl;
      cin.getline(input, max);
      if (strcmp(input, "video games") == 0)
        { // START HERE
	  cout << "Title: " << endl;
	  char* gameTitle = new char[100];
	  strcpy(gameTitle, "hello");
	  cout << "Year Released: " << endl;
	  cout << "Publisher: " << endl;
	  cout << "Rating: " << endl;
	  VideoGames* videoGame = new VideoGames(); // this goes in the vector
	  
        }
      else if (strcmp(input, "music") == 0)
        {
        }
      else if (strcmp(input, "movies") == 0)
        {
        }
}
