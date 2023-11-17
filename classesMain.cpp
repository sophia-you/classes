#include <iostream>
#include <cstring>
#include <vector>
#include "classesParent.h"
#include "videoGames.h"
#include "music.h"
#include "movie.h"
using namespace std;

/*
 * Name | Sophia You
 * Date | November 8 2023
 * Description |
 * The main method contains the parent class. The user can add, search, or
 * delete items in the media library. 
 */

// funaction prototypes
void addMedia(vector<Parent*> &mediaList);
void searchMedia(vector<Parent*> &mediaList);
void deleteMedia(vector<Parent*> &mediaList);

int main()
{
  
  // This vector will hold all types of media
  vector<Parent*> mediaList;
  int editing = 1; // checks to see if the user wants to quit
  int max = 80;
  char input[max]; // choose type of media
  cout << "Welcome to the media library. Please enter a command." << endl;
  while (strcmp(input, "quit") != 0)
    {
  cout << "Type 'add' to add a type of media." << endl;
      cout << "Type 'search' to search for media in a database." << endl;
      cout << "Type 'delete' to delete an item from the library." << endl;
      cout << "Type 'quit' to quit." << endl;

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
	  deleteMedia(mediaList);
	}
      // if the user enters "quit," doing do anything
      // when it goes back up to the while loop, it'll terminate
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
  cout << "" << endl;
  cout << "Enter one of the following media types. Only use lower case lett\
ers." << endl;
  cout << "video games" << endl;
  cout << "movies" << endl;
  cout << "music" << endl;
  cin.getline(input, max);

  // we need specific info depending on the type of media
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
	  // asks for user to input fields
	  cout << "artist: " << endl;
          char* artist = new char[100];
          cin.getline(input, max); // reads in info
          strcpy(artist, input);

	  cout << "Duration (minutes): " << endl;
          float duration = 0;
          cin >> duration; // reads in info
          cin.ignore(max, '\n');
	  
	  cout << "Publisher: " << endl;
          char* publisher = new char[100];
          cin.getline(input, max); // reads in info
          strcpy(publisher, input);
	  
          Music* music = new Music(title, year, artist, duration, publisher); // this goes in the vector
          mediaList.push_back(music); // adds to vector
          cout << "You have now added new music." << endl;
          music->print(); // prints out entered info
	}
      else if (strcmp(input, "movies") == 0)
        {
	  // enter fields
	  cout << "Director: " << endl;
	  char* director = new char[100];
	  cin.getline(input, max);
	  strcpy(director, input);
	  
	  cout << "Duration (minutes): " << endl;
          float duration = 0;
          cin >> duration; // reads in info
          cin.ignore(max, '\n');

	  cout << "Rating: " << endl;
          float rating = 0;
          cin >> rating; // reads in info
          cin.ignore(max, '\n');
	  
	  Movie* movie = new Movie(title, year, director, duration, rating); //this goes in the vector
          mediaList.push_back(movie); // adds to vector
          cout << "You have now added a new movie." << endl;
          movie->print(); // prints out entered info

	}
}

// this function allows the user to search for media by title or year.
void searchMedia(vector<Parent*> &mediaList)
{
  cout << "If searching by title, enter 'title'. If searching by year, enter 'year.' Lower case letters only!" << endl;
  int max = 80;
  char input[max];
  cin.getline(input, max);
  if (strcmp(input, "title") == 0) // search by title
    {
      cout << "Enter title: " << endl;
      cin.getline(input, max);
      // walk through the vector and find the occurences
      for (vector<Parent*>::iterator it = mediaList.begin(); it !=mediaList.end(); it++)
	{
	  if(strcmp(input, (*it)->getTitle()) == 0)
	    {
	      (*it)->print(); // print out the media information
	    }
	}
    }
  else if (strcmp(input, "year") == 0) // search by year
    {
      int year = 0;
      cout << "Enter year: " << endl;
      cin >> year;
      cin.ignore(max, '\n');
      // walk through the vector and find the occurrences
      for (vector<Parent*>::iterator it = mediaList.begin(); it !=mediaList.end\
(); it++)
        {
          if(year == (*it)->getYear()) // if the year matches the mediaList year
            {
              (*it)->print();
            }
        }
    }
}

/* this function asks for the title or year, asks for user confirmation
 * and deletes the media upon said user confirmation. If the user does not 
 * want to delete that piece of media, the program moves onto the next item in
 * the list
 */
void deleteMedia(vector<Parent*> &mediaList)
{
  cout << "You are now deleting items from the media library. You will need to enter either the TITLE or the YEAR. To delete by title, enter 'title', and to delete by year, enter 'year.'" << endl;
  int max = 80;
  int year = 0;
  char input[max];
  char confirm[max]; // stores if the user wants to delete the item
  cin.getline(input, max);
  
  if (strcmp(input, "title") == 0) // search by title
    {
      cout << "Enter title: " << endl;
      cin.getline(input, max);
       // walk through the vector and find the occurances
      for (vector<Parent*>::iterator it = mediaList.begin(); it !=mediaList.end\
(); it++)
        {
          if(strcmp(input, (*it)->getTitle()) == 0)
            {
              (*it)->print(); // print the media first
	      cout << "Delete this item? Enter 'yes' or 'no.' Lower case letters only." << endl;
	      cin.getline(confirm, max);
	      if (strcmp(confirm, "yes") == 0) // if they confirm, delete, otherwise move on
		{
		  cout << "Item deleted." << endl;
		  delete *it; // delete the actual media
		  mediaList.erase(it); // delete the pointer in memory
		  break; 
		}
            }
	}
    }
  else if (strcmp(input, "year") == 0) // searching by year
    {
      cout << "Enter year: " << endl;
      cin >> year;
      cin.ignore(max, '\n');
       for (vector<Parent*>::iterator it = mediaList.begin(); it !=mediaList.end\
\
(); it++)
        {
          if(year == (*it)->getYear())
            {
              (*it)->print(); // print the media first
              cout << "Delete this item? Enter 'yes' or 'no.' Lower case letter\
s only." << endl;
              cin.getline(confirm, max);
              if (strcmp(confirm, "yes") == 0) // if they confirm, delete
                {
                  cout << "Item deleted." << endl;
                  delete *it; // delete the actual media
                  mediaList.erase(it); // delete the pointer in memory
                  break;
                }
	    }
	}
      
    }
}
