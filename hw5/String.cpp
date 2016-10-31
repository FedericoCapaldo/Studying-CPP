#include "String.h"
#include <iostream>
using namespace std;

String::String(const char * s) {
    cout << "creating new string" << endl;
    // WHAT SHOULD I DO HERE????
    // initalise head
    head = ListNode::stringToList(s);
}

String::String( const String & s ) {
  // WHAT SHOULD I DO HERE??
  head = s -> head;
}

String String::operator = ( const String & s ) {

}

char & String::operator [] ( const int index ) {

}

int String::size() const {

}

int String::indexOf( char c ) const {

}

bool String::operator == ( const String & s ) const {

}

bool String::operator < ( const String & s ) const {

}

/// concatenates this and s
String String::operator + ( const String & s ) const {

}

/// concatenates s onto end of this
String String::operator += ( const String & s ) {

}

// does not modify this String
String String::reverse() {

}

void String::print( ostream & out ) {

}

void String::read( istream & in ) {

}

String::~String() {
    cout << "deleting from descructor" << endl;
}


ostream & operator << ( ostream & out, String str ) {
    str.print(out);
    return out;
}

istream & operator >> ( istream & in, String & str ) {
    str.read(in);
    return in;
}



/// LIST NODE METHODS

// look at the photo of the projector.
// ListNode * temp = newListNode(s[0], NULL);
// int i = 0;
// for (ListNode *p = temp; p!= NULL; p = p -> next) {
//   // THIS SHOULD LOOP UNTIL CHAR '\0' is found in *s;
//   p->next= new ListNode(s[i+1], NULL);
//   i++;
// }

String::ListNode * String::ListNode::stringToList(const char *s) {
  ListNode * temp = new ListNode(s[0], NULL);
  temp -> info = s[0];
  temp -> next = new ListNode(s[i+1]);

}

// create new pointer and copy each element of the list
ListNode * String::ListNode::copy(ListNode * L) {
  ListNode * myNode = new ListNode();
  myNode -> info = L -> info;
  myNode -> next = L -> info; // is this right?
  return myNode;
}

// Traverse all list and then check each char
bool String::ListNode::equal(ListNode * L1, ListNode * L2) {
  int i = 0;
  while(L1 != NULL || L2 != NULL) { // wrong conversion
    if(L1 == NULL || L2 == NULL) {
      return false;
    }

    if (!(L1 -> info == L2 -> info)) {
      return false;
    }
    L1 = L1 -> next;
    L2 = L2 -> next;
  }
  return true;
}


ListNode * String::ListNode concat(ListNode * L1, ListNode * L2) {
  ListNode * L1end = L1;

  // traverse first List
  while(L1end->next != NULL) {
    L1end = L1end -> next;
  }

  // concatenate the second string
  while(L2 != NULL) {
    L1end -> next = L2;
    L2 = L2 -> next;
  }

  return L1;
}


// loop and compare each char like in strcmp
int String::ListNode::compare(ListNode * L1, ListNode * L2) {
  return L1 -> info - L2 -> info;
}


// assuming that L is the head
int String::ListNode::length(ListNode *L) {
     int counter = 0;
     ListNode * current = L;
     while(current!=NULL) {
       current = current -> next;
       counter++;
     }

     return counter;
}
