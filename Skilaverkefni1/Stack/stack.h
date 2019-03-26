//
// Created by rober on 3/15/2019.
//

#include "stackNode.h"
#include <string>
#ifndef FORR3CG05DU_STACK_H
#define FORR3CG05DU_STACK_H

class Stack{
private:
    StackNode* head;
    int nextCourseId;
    int totalCourses;
public:
    Stack();

    int getNextCourseId();
    int push(string, float);
    int pop();
    void print();
    float getAvgGrade();
};

#endif //FORR3CG05DU_STACK_H
