#include "String.h"
#include <iostream>
using namespace std;

char * myStrcpy( char *dest, const char *src ) {
  char *destinationString = dest;
  while((*dest++ = *src++));
  return destinationString;
}


int main() {

  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  myStrcpy (str2,str1);
  myStrcpy (str3,"copy successful");
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;

}
