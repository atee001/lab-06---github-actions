#include "../header/rectangle.hpp"
#include <iostream>
using namespace std;

int main(){

	Rectangle* r = new Rectangle();
	cout << "Rectangle area : " << r->area() << endl;
	delete r;

return 0;
}
