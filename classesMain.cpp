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
void searchMedia(vector<Parent*> &mediaList);

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
  int editing = 1; // checks to see if the user wants to quit
  
  cout << "Welcome to the media library. Please enter a command." << endl;
  while (editing !=0)
    {
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
      searchMedia(mediaList);
    }
  else if (strcmp(input, "delete") == 0)
    {
    }
  cout << "Enter '1' to continue using the media library. Enter '0' to quit." << endl;
  cin >> editing;
  cin.ignore(max, '\n');
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
  cin >> year;
  cin.ignore(max, '\n');
  // reads in info
  
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
	  mediaList.push_back(videoGame); // adds to vector
	  cout << "You have now added a new game." << endl;
	  videoGame->print(); // prints out entered info
	  
        }
      else if (strcmp(input, "music") == 0)
        {
        }
      else if (strcmp(input, "movies") == 0)
        {
        }
}

// this function allows the user to search for media by title or year.
void searchMedia(vector<Parent*> &mediaList)
{
  cout << "If searching by title, enter 'title'. If searching by year, enter 'year.' Lower case letters only!" << endl;
  int max = 80;
  char input[max];
  cin.getline(input, max);
  if (strcmp(input, "title") == 0)
    {
      cout << "Enter title: " << endl;
      cin.getline(input, max);
      // walk through the vector and find the occurances
      for (vector<Parent*>::iterator it = mediaList.begin(); it !=mediaList.end(); it++)
	{
	  if(strcmp(input, (*it)->getTitle()) == 0)
	    {
	      (*it)->print();
	    }
	}
    }
  else if (strcmp(input, "year") == 0)
    {
      int year = 0;
      cout << "Enter year: " << endl;
      cin >> year;
      cin.ignore(max, '\n');
            // walk through the vector and find the occurances
      for (vector<Parent*>::iterator it = mediaList.begin(); it !=mediaList.end\
(); it++)
        {
          if(year == (*it)->getYear())
            {
              (*it)->print();
            }// START HEREEEEEE!!!!!!!!
        }
    }
}
