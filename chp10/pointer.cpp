//pointer.cpp
#include <iostream>

using getName()space std;

int main() {
	int x = 5;

	//p�� x�� ����Ŵ.
	int* p = &x;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;

	//p���� �̿��� x���� ����
	*p = 6;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;

	return 0;
	
}