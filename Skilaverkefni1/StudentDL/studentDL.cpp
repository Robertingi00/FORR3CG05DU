//
// Created by rober on 3/25/2019.
//

#include "../student.h"
#include "studentDL.h"
#include "studentDLNode.h"
#include <iostream>

using namespace std;

StudentDL::StudentDL() {
    this->head = nullptr;
    this->nextId = 1;
}

int StudentDL::push(string name) {
    if(head){
        head->push(getNextId(), name);
    }else{
        head = new StudentDLNode(getNextId(), name);
    }
}

void StudentDL::print() {
    if(head){
        head->print();
    }else{
        cout << "Einginn nemandi skráður" << endl;
    }
}

void StudentDL::printMenu() {
    if(head){
        head->printMenu();
    }else{
        cout << "enginn nemendur" << endl;
    }
}

int StudentDL::getNextId() {return nextId ++;}
Student* StudentDL::getCurrentStudent(int id) {
    if(head){
        return head->getCurrentStudent(id);
    }
}