#include "String.h"
#include <iostream>
using namespace std;


String::String( const char * s ) {
  strcpy(buf, s);
}

String::String( const String & s ) {
  strcpy(buf, s.buf);
}

String String::operator = ( const String & s ) {
  strcpy(buf, s.buf);
  return *this;
}

char & String::operator [] ( int index ) {
  if(index < 0 || index > MAXLEN) {
    cerr << "Index out of bound of this string" << endl;
    exit(-1);
  }
  return buf[index];
}

int String::size() {
  return String::strlen(buf);
}


//NOT COMPLETE
String String::reverse() {
  int size = strlen(buf);
  int ind = 0;
  char reversed[size];

  for (int i = size ; i >= 0 ; i--) {
    reversed[ind] = buf[i];
    ind++;
  }

  // for some reason it does not initalise p properly
  String p(reversed);

  for(int i=0; i<strlen(reversed); i++) {
    p.buf[i] = reversed[i];
  }

  cout << reversed << endl;

  return p;
}

int String::indexOf( const char c ) {
  char *instance = strchr(buf, c);
  int index = (int) (instance - buf);
  return index;
}

int String::indexOf( const String pattern ) {
  char *instance = strstr(buf, pattern.buf);
  int index = (int) (instance - buf);
  return index;
}

bool String::operator == ( const String s ) {
  if (strcmp(buf, s.buf) == 0) {
    return true;
  }
  return false;
}

bool String::operator != ( const String s ) {
  if(strcmp(buf, s.buf) == 0) {
    return false;
  }
  return true;
}

bool String::operator > ( const String s ) {
  if (strcmp(buf, s.buf) > 0) {
    return true;
  }
  return false;
}

bool String::operator < ( const String s ) {
  if (strcmp(buf, s.buf) < 0) {
    return true;
  }
  return false;
}


bool String::operator >= ( const String s ) {
  if (strcmp(buf, s.buf) >= 0) {
    return true;
  }
  return false;
}

bool String::operator <= ( const String s ) {
  if (strcmp(buf, s.buf) <= 0) {
    return true;
  }
  return false;
}


String String::operator + (const String s ) {
  String result;
  result += *this;
  result += s;
  return result;
}


String String::operator += ( const String s ) {
  strcat(buf, s.buf);
}

void String::print( ostream & out ) {
  for(int i=0; i<strlen(buf); i++) {
    cout << buf[i] ;
  }
  cout << endl;
}

void String::read( istream & in) {

}

String::~String() {

}

// DEFINITION OF ALL THE str*** FUNCTIONS

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
  return String::strcpy(dest + String::strlen(dest), src);
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

ostream & operator << ( ostream & out, String str ) {
  str.print(out);
  return out;
}

istream & operator >> ( istream & in, String & str ) {
  char* received = new char[MAXLEN];
  in.getline(received,MAXLEN);
  str = received;
  return in;
}
