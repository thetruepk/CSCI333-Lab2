
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
  if(top == capacity){
   // create new stack twice as big
    Stack* temp = new Stack[top *2];
  // copy all elements to new stack
    for(int i = 0; i < top; i++){
      temp[i]=theStack[i];
    }
    
  // delete old stack
    delete[] theStack;
  //point old stack pointer to new stack
    temp[top] = value;
  }else{
  //if NOT full this should run
 theStack[top] = value;
  top++;
  } 
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
