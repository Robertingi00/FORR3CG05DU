//
// Created by rober on 3/15/2019.
//

#include "course.h"
#include <iostream>

using namespace std;

Course::Course(int id, string name, float grade) {
    this->id = id;
    this->name = name;
    this->grade = grade;
};

void Course::print() {
    cout << "Id: " << id << ", Name: " << name << ", einkunn: " << grade << endl;
}

float Course::getGrade(){
    return grade;
}