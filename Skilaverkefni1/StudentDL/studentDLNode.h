//
// Created by rober on 3/25/2019.
//
#include <string>
#include "../student.h"

#ifndef FORR3CG05DU_NEMENDURSTACKNODE_H
#define FORR3CG05DU_NEMENDURSTACKNODE_H

class StudentDLNode{
private:
    StudentDLNode* next;
    Student* data;
public:
    StudentDLNode(int, string);

    void print();

    int push(int, string);
    int dele(int);
    void printMenu();
    Student* getCurrentStudent(int);

};

#endif //FORR3CG05DU_NEMENDURSTACKNODE_H
