#include "../header/rectangle.hpp"
#include "gtest/gtest.h"
#pragma once
TEST(ConstrTest, Zero){
	
	Rectangle* r = new Rectangle(0,0);
	Rectangle* test = new Rectangle();

	test->set_width(0);
	test->set_height(0);
	

	EXPECT_EQ(test->perimeter(), r->perimeter());
	delete r;
	delete test;
}
TEST(ConstrTest, Fifty){
	
	Rectangle* r = new Rectangle(10,5);
	Rectangle* test = new Rectangle();
	test->set_width(10);
	test->set_height(5);
	
	EXPECT_EQ(test->area(),r->area());
	delete r;
	delete test;
}

TEST(ConstrTest, Neg){

	Rectangle* r = new Rectangle(-1,5);
	Rectangle* test = new Rectangle();
	test->set_width(-1);
	test->set_height(5);

	EXPECT_EQ(test->area(), r->area());
	delete r;
	delete test;
}
