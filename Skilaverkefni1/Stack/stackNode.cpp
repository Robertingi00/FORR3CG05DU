//
// Created by rober on 3/15/2019.
//

#include "stackNode.h"
#include "../course.h"
#include <iostream>

using namespace std;


StackNode::StackNode(int id, string name, float grade, StackNode* next = nullptr) {
    data = new Course(id, name, grade);
    this->next = next;
}

void StackNode::print() {
    this->data->print();
    if(next){
        next->print();
    }
}

float StackNode::getAvgGrade() {
    if (next){
        return data->getGrade() + next->getAvgGrade();
    }else{
        return data->getGrade();
    }
}


StackNode* StackNode::getNext(){ return next;};
