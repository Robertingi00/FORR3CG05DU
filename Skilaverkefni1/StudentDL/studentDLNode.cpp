//
// Created by rober on 3/25/2019.
//
#include <iostream>

#include "studentDLNode.h"
#include "../student.h"

using namespace std;

StudentDLNode::StudentDLNode(int id, string name) {
    this->next = nullptr;
    this->data = new Student(id, name);
}

int StudentDLNode::push(int id, string name) {
    if(next){
        next->push(id, name);
    }else{
        next = new StudentDLNode(id, name);
    }
}

void StudentDLNode::print() {
    data->print();
    if(next){
        next->print();
    }

}

void StudentDLNode::printMenu() {
    cout << data->getId() << ". " << data->getName() << endl;
    if(next){
        next->printMenu();
    }
}

Student* StudentDLNode::getCurrentStudent(int id) {
    if(data->getId() == id){
        return data;
    }else{
        if (next){
            return next->getCurrentStudent(id);
        }else{ return nullptr;};
    }
}