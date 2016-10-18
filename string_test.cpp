#include "String.h"
#include <iostream>
using namespace std;


int myStrncmp( const char *left, const char *right, int n ) {
  for (int i=0; i < n; i++) {
    if(*left != *right) {
      return 1;
    }
    right++;
    left++;
  }
  return 0;
}

int main() {
  char str[][5] = { "R2D2" , "R3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
   if (String::strncmp (str[n],"R2xx",2) == 0)
   {
     printf ("found %s\n",str[n]);
   }
  return 0;
}
