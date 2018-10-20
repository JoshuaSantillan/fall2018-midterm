/**

 Description:
Filename:
Author:
Date:
*/

#include<iostream>
#include<string>
using namespace std;


string get_string(string prompt);

int main()
{


   string sentance = get_string("Enter a Sentance about anything and everything: ");
   cout << sentance << endl;
   string count_char = get_string("Enter ONE character to look for in your sentance(may include spaces): ");

   cout << "The Character you picked is: \""+count_char+ "\"" << endl;
   return 0;

}


string get_string(string prompt)
{

    string value;
    cout << prompt;
    getline(cin,value);    

   return value;

}


