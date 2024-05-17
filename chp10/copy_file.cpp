//copy_file.cpp
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ifstream infile("in.txt");
	ofstream outfile("out2.txt");

	string s;

	while (getline(infile, s)) {
		outfile << s << endl;
	}

	return 0;
}