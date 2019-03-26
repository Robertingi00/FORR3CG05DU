//
// Created by rober on 3/15/2019.
//
#include <string>
#include "Stack/stack.h"

#ifndef FORR3CG05DU_NEMANDI_H
#define FORR3CG05DU_NEMANDI_H

using namespace std;

class Student{
private:
    int id;
    string name;
    Stack* courses;
public:
    Student(int, string);
    int addCourse(string, float);

    void print();
    string getName();

    int getId();
};

#endif //FORR3CG05DU_NEMANDI_H
