//
// Created by rober on 3/15/2019.
//

#include "student.h"
#include "Stack/stack.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(int id, string name) {
  this->id = id;
  this->name = name;
  this->courses = new Stack();
};

int Student::addCourse(string name, float grade) {
    courses->push(name, grade);
}

void Student::print() {
    cout << "Nemandi: " << name << endl;
    courses->print();
}


int Student::getId(){return id;}
string Student::getName(){return name;};