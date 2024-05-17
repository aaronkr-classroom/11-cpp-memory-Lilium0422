// write_args.cpp
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//명령 프롬프트에 입력한 인수가 존재하면 출력

	if (argc > 1) {
		//첫번째 인수를 출력
		//공백 하나와 함께 나머지 인수들을 각각 출력
		cout << argv[1]; // "Hello"

		for (int i = 2; i != argc; ++i) {
			cout << " " << argv[i]; // argv[i]는 char* 타입
		}
	}
	cout << endl;
	return 0;
}