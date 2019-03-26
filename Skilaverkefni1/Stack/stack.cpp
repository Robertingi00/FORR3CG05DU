//
// Created by rober on 3/15/2019.
//
#include <iomanip>
#include "stack.h"
#include "stackNode.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    nextCourseId = 1;
}


int Stack::push(string name, float grade) {
    head = new StackNode(getNextCourseId(), name, grade, head);
    totalCourses ++;
}

int Stack::pop(){
    StackNode* temp = head;
    head = head->getNext();
    totalCourses --;
    delete temp;

}

void Stack::print() {
    if(head){
        head->print();
        cout << "Meðaleinkun: " << setprecision(2) << this->getAvgGrade() << endl;
    }else{
        cout << "Einginn áfanga." << endl;
    }
}

float Stack::getAvgGrade() {
    if(head){
        return head->getAvgGrade()/totalCourses;
    }else{
        cout << "einginn áfangar skráðir." << endl;
    }

};

int Stack::getNextCourseId(){ return nextCourseId ++;};
