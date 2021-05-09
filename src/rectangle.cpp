#pragma once 

#include "rectangle.hpp"

#include <bits/stdc++.h>

using namespace std;

void set_Width(int w) {
	width = w;
}

void set_Height(int h) {
	height = h;
}

int area() {
	return width * height;
}

int perimeter() {
	return (2 * width) + (2 * height);
}
