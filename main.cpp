/**
Description: Gets a string and character from user, using a for loop detects how many time the character was used in the string.
Filename: main.cpp
Author: Joshua Santillan
Date: 10/20/18
*/

#include<iostream>
#include<string>
using namespace std;


string get_string(string prompt);
int char_count(string, char );
char get_char (string prompt);
int main()
{
    string sentance = get_string("Enter a Sentance about anything and everything: ");
    char c = get_char("Enter a character");
  
    cout << "The character you picked is: " << "\"" << c << "\"" << endl;
    cout << "That character appeared " << char_count(sentance, c) << " time(s)"; 

   return 0;
}


string get_string(string prompt)
{
    string value;
    cout << prompt;
    getline(cin,value);    
    return value;
}

char get_char (string prompt)
{
  char c;
  cout << prompt;
  cin >> c;
  return c;
}

int char_count(string sentance, char c)
{
  int count = 0;
  for (int i = 0; i < sentance.size();i++)
  {
    char character = sentance.at(i);    
      if (character == c)
      {
        count ++;
      }       
  }
  return count;
}
