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

// check the presence of a substring in a string
const char * String::strstr( const char *haystack, const char *needle ) {
  int i = 0;
  const char *pointer = haystack;
  while(haystack[i]) {
    const char *occurence = String::strchr(++haystack, needle[0]);
    if (occurence == 0) {
      return NULL;
    } else {
      if(String::strncmp(occurence, needle, String::strlen(needle)) == 0) {
        return occurence ;
      } else {
        i++;
        continue;
      }
    }
  }
  return NULL;
}

// check the presence of a substring in a string
char * String::strstr( char *haystack, const char *needle ) {
    int i = 0;
    char *pointer = haystack;
    while(haystack[i]) {
      char *occurence = String::strchr(++haystack, needle[0]);
      if (occurence == 0) {
        return NULL;
      } else {
        if(String::strncmp(occurence, needle, String::strlen(needle)) == 0) {
          return occurence ;
        } else {
          i++;
          continue;
        }
      }
    }
    return NULL;
}
