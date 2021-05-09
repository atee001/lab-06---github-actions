
#pragma once

#include "gtest/gtest.h"

#include "../header/rectangle.hpp"

using namespace std;

TEST(PeriTests, Zero) {

	int weight = 0;
	int height = 0;
	
	Rectangle* r = new  Rectangle(weight, height);

	EXPECT_EQ(r->perimeter(), 0);
	
	delete r;
	
}

TEST(PeriTests, TwoPos) {
	
	int weight = 2;
	int height = 3;

	Rectangle* r = new Rectangle(weight, height);

	EXPECT_EQ(r->perimeter(), 10);
	
	delete r;
}

TEST(PeriTests, OneNeg) {

	int weight = -2;
	int height = 3;

	Rectangle* r = new Rectangle(weight, height);

	EXPECT_EQ(r->perimeter(), 2);

	delete r;
}

TEST(PeriTests, TwoNeg) {

	int weight = -2;
	int height = -3;
	
	Rectangle* r = new Rectangle(weight, height);

	EXPECT_EQ(r->perimeter(), -10);

	delete r;
}

