#include "Box.h"

// Implement setters and getters
void Box::setValues (int l, int w, int h){
  length = l;
  width = w;
  height = h;  
}
// Implemenet the calcVolume() unction
int Box::getLength (){
  return length;
}

int Box::getWidth (){
  return width;
}

int Box::getHeight (){
  return height ;
}

int Box::calcVolume() {
  return length * width * height;
}
