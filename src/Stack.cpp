
#include "Stack.h"
#include <iostream>
 using std::cout;
 using std::endl;

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  capacity = 10;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
   // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  //point old stack pointer to new stack
 theStack[top] = value;
  top++;
 
 }

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
