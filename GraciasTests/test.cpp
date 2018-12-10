#include "pch.h"
#include "HelloWorld.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(TestHelloworldGreet, TestName) {
	HelloWorld world;
	EXPECT_EQ(world.Greet(), "hi!!!");
}