//
// Created by rober on 3/15/2019.
//
#include <string>
#include "../course.h"

#ifndef FORR3CG05DU_STACKNODE_H
#define FORR3CG05DU_STACKNODE_H

using namespace std;

class StackNode{
private:
    Course* data;
    StackNode* next;
public:
    StackNode(int, string, float, StackNode*);

    StackNode* getNext();

    void print();
    float getAvgGrade();
};

#endif //FORR3CG05DU_STACKNODE_H
