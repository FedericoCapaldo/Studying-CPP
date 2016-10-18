#include "String.h"
#include <iostream>
using namespace std;

char * myStrstr(char *haystack, const char *needle ) {
  char *myPointer = NULL;

  int i =0;
  while(haystack[i] != '\0') {
    if(haystack[i] == needle[0]) {
      myPointer = haystack + i; //memory address incremented by i, to point at that memory location
        int j=1;
        while(needle[j] != '\0') {
          if(haystack[i+j] != needle[j]) {
            myPointer = NULL;
            j = 1;
            break;
          }
          j++;
        }
        if(j != 1) {
          return myPointer;
        }
    }
    i++;
  }
  return myPointer;
}

int main() {
  char str[] ="This is a simple string";
  char * pch;
  pch = String::strstr (str,"simple");
  strncpy (pch,"sample",6);
  puts (str);
  return 0;
}
