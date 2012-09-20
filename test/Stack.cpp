#include "gtest/gtest.h"
#include "../src/Stack.h"
using std::cout;
using std::endl;

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);
  
  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, arrayOverflow){
   Stack* s = new Stack();
   for(int i = 0; i < 19; i++){
     s->push(i);
   }
   EXPECT_EQ(19,s->size());
   delete s;
}






