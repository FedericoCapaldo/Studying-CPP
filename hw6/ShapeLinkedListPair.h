// THIS NEEDS TO BE A NESTED CLASS INDSIE PICTURE

#include "Shape.h"

typedef class ShapeLinkedListPair * ShapeLinkedList;
class ShapeLinkedList
{
public:
  Shape * info;
  ShapeLinkedList * next;
  ShapeLinkedList( Shape * newInfo, ShapeLinkedList newNext )
    : info(newInfo), next( newNext )
  {
  }

};
