//
// Created by rober on 3/25/2019.
//

#include "studentDLNode.h"
#include "../student.h"
#include <string>

#ifndef FORR3CG05DU_NEMENDURSTACK_H
#define FORR3CG05DU_NEMENDURSTACK_H

using namespace std;

class StudentDL{
private:
    StudentDLNode* head;
    int nextId;
public:
    StudentDL();

    int push(string);
    int dele();
    void print();
    void printMenu();

    int getNextId();
    Student* getCurrentStudent(int);
};

#endif //FORR3CG05DU_NEMENDURSTACK_H
