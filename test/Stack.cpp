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


     EXPECT_EQ(1,0);
   delete s;
}






