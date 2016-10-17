#include "String.h"

int String::strlen( const char *s ) {
  int length = 0;
  while(*s != '\0') {
    length++;
    s++;
  }
  return length;
}

char * String::strcpy( char *dest, const char *src ) {
  char *destinationString = dest;
  while((*dest++ = *src++));
  return destinationString;
}
