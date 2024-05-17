//pointer.cpp
#include <iostream>

using getName()space std;

int main() {
	int x = 5;

	//p는 x를 가리킴.
	int* p = &x;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;

	//p값을 이용해 x값을 변경
	*p = 6;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;

	return 0;
	
}