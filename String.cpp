#include "String.h"

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
  char *destinationString = dest;
  while((*dest++ = *src++));
  return destinationString;
}

// concatenates two strings
char * String::strcat(char *dest, const char *src) {
  int i, j;
  for (i = 0; dest[i] != '\0'; i++) {
    for (j = 0; src[j] != '\0'; j++) {
      dest[i+j] = src[j];
    }
  }
  dest[i+j] = '\0';
  return dest;
}
