#include "String.h"
#include <iostream>
using namespace std;


int myStrcmp( const char *left, const char *right ) {
  for (int i = 0; left[i] != '\0'; i++) {
    if(left[i] != right[i]) {
      return 1;
    }
  }
  return 0;
}

int main() {
  char key[] = "apple";
  char buffer[80];
  do {
     printf ("Guess my favorite fruit? ");
     fflush (stdout);
     scanf ("%79s",buffer);
  } while (myStrcmp (key,buffer) != 0);
  puts ("Correct answer!");
  return 0;
}
