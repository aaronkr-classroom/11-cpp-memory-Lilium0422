#pragma once
// Student_info.h

#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student_info {
public: // 접근 할 수 있는 함수
    // ## 생성자 정의 ##########
    Student_info(); // 빈 Student_info 객체를 생성
    Student_info(istream&); // 스트림을 읽어 Student_info 객체를 생성
    //read_hw이랑 비슷한 함수


    // ## 멤버 함수 정의 ##########
    string getName() const { return name; }
    void setName(string n) { name = n; } // 안쓸거지만 예시로

    bool valid() const { return !homework.empty(); }

    // 9.2.1/254p.에서 정의한 read 함수
    istream& read(istream&);

    // 9.2.1/254p. 에서 정의한 것과 같은 grade 함수
    double grade() const;

private: // 숨기고 싶은 변수
    string name;
    double midterm, final;
    vector<double> homework;
}; // 세미콜론을 잊지 않도록 주의

bool compare(const Student_info&, const Student_info&);


#endif