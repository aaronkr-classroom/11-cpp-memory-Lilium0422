//letter_grade.cpp
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iomanip>

#include "grade.h"
#include "Student_info.h"

using namespace std;

string letter_grade(double grade) {
	//각 범위를 구분하는 함수
	static const double numbers[] = {
		97,94,90,87,84,80,77,74,70,60,0
	};

	//문자 등급의 명칭
	static const char* const letters[] = {
		"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "-C", "D", "F"
	};

	//배열 크기와 요소 하나의 크기를 사용하여 각 범위를 구분하는 점수 개수를 구함.
	static const size_t ngrades = sizeof(numbers) / sizeof(*numbers);
	//주어진 최종 점수에 해당하는 문자 등급을 찾아서 반환
	for (size_t i = 0; i < ngrades; i++) {
		if (grade >= numbers[i])
			return letters[i];
	}

	return "?\ ?\ ?";
}

int main() {
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	ifstream students_file("grades.txt");

	//학생 이름과 모든 점수를 읽어 저장하기
	while (read(students_file, record)) {
		maxlen = max(maxlen, record.getName().size());
		students.push_back(record);
	}

	//학생 기록 정렬하기
	sort(students.begin(), students.end(), compare);

	//이름과 점수를 쓰기
	for (vector<Student_info>::size_type i = 0;
		i != students.size(); i++) {
		cout << students[i].getName()
			<< string(maxlen + 1 - students[i].getName().size(), ' ');

		try {
			double final_grade = students[i].grade();
			streamsize prec = cout.precision();

			cout << setprecision(3) << letter_grade(final_grade)
				<< setprecision(prec) << endl;
		}
		catch (domain_error e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}