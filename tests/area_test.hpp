#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(areaTest, zero){
  Rectangle* r = new Rectangle(0,0);
  int ans = 0;

  EXPECT_EQ(ans, r->area());
  delete r;
}
TEST(areaTest, pos){
  Rectangle* r = new Rectangle(5,10);
  int ans = 50;
  EXPECT_EQ(ans, r->area());
  delete r;
}
TEST(areaTest, neg){
  Rectangle* r = new Rectangle(10,-10);
  int ans = -100;
  EXPECT_EQ(ans, r->area());
  delete r;

}
