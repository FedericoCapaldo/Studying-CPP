#include "String.h"
#include <iostream>
using namespace std;

// get length of a string
int String::strlen( const char *s ) {
  int length = 0;
  while(*s != '\0') {
    length++;
    s++;
  }
  return length;
}

// copy one src string to destination string
char * String::strcpy( char *dest, const char *src ) {
  int i = 0;
  while (src[i]) {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}

// concatenates two strings
char * String::strcat(char *dest, const char *src) {
  String::strcpy(dest + String::strlen(dest), src);
}

// compare two strings, returns 0 if they are the same
int String::strcmp( const char *left, const char *right ) {
  for (int i = 0; left[i]; i++) {
    if(left[i] != right[i]) {
      return left[i] - right[i];
    }
  }
  for (int i = 0; right[i]; i++) {
    if(left[i] != right[i]) {
      return left[i] - right[i];
    }
  }
  return 0;
}

// compare chars of two string up to position n
int String::strncmp( const char *left, const char *right, int n ) {
  for (int i=0; i < n; i++) {
    if(*left != *right) {
      return left[i] - right[i];
    }
    right++;
    left++;
  }
  return 0;
}

// locate the first occurence of a certain char in a const string
const char * String::strchr( const char *str, int c ){
  while(*str != '\0'){
    if(*str == c) {
      return str;
    }
    str++;
  }
  return 0;
}

// locate the first occurence of a certain char in a string
char * String::strchr( char *str, int c ) {
  while(*str != '\0'){
    if(*str == c) {
      return str;
    }
    str++;
  }
  return 0;
}

//check if a strign contains a substringa and if so returns its pointer
/*const char * String::strstr( const char *haystack, const char *needle ) {
  char *myPointer = 0;

  int i =0;
  while(haystack[i] != '\0') {
    if(haystack[i] == needle[0]) {
      myPointer = haystack + i; //memory address incremented by i, to point at that memory location
        int j=1;
        while(needle[j] != '\0') {
          if(haystack[i+j] != needle[j]) {
            myPointer = 0;
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

// returns the pointer of a string which contains a substring
static char * String::strstr( char *haystack, const char *needle ) {
  char *myPointer = 0;

  int i =0;
  while(haystack[i] != '\0') {
    if(haystack[i] == needle[0]) {
      myPointer = haystack + i; //memory address incremented by i, to point at that memory location
        int j=1;
        while(needle[j] != '\0') {
          if(haystack[i+j] != needle[j]) {
            myPointer = 0;
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
*/
