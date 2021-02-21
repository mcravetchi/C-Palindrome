/* 
Max Cravetchi 
Mr. Galbraith, C++ Programming
21 Feb 2021
This program takes in a user input.
All punctuations and spaces are removed.
This is then checked by itself in reverse, ie. Palindrome.
If it is palindrome, it says palindrome.
If it is not palindrome, it says not palindrome.
 */


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() { //int main declaration
  char user[80]; //char array for user, size of 80
  char newUser[80]; //this is new char array which will be the one without punctuation
  cin.get(user, 80);
  int n = 0; //declaration of ints in the main function for for loops.
  int o = 0;
  int p = 0;
  int e = 0;

  //for loop which removes punctuation, iterates through array
  for(int i = 0; i<=strlen(user); ++i) { 
    if((user[i] != ' ') && (ispunct(user[i]) == false)) { //all non-space-punctuation entries copied to newUser
      newUser[n++] = tolower(user[i]);
	newUser[n]='\0';
    }//if statement
  } // for loop
  cout<<"Array without punctuation: " << newUser<<endl;

  //this for loop checks if it is palindrome. it iterates newUser twice, once going from 0-80, other going 80-0.
  for(p=0; e=strlen(newUser)-1; ++p, --e) {
    if(newUser[p]==newUser[e]) { //if iteration from 0-80 equals iteration from 80-0
      cout << "Palindrome" << endl;
      return 0;
    } else {
      cout << "Not a palindrome" << endl;
      return 0;
    }
  }//for loop
} //int main
