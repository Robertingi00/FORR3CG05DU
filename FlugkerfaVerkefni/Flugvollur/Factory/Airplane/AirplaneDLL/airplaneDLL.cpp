//
// Created by rober on 3/14/2019.
//
#include <iostream>
#include "airplaneDLL.h"

using namespace std;

AirplaneDLL::AirplaneDLL(){
    this->head = nullptr;
}

int AirplaneDLL::push(string model, string name, int capasity){
    if(head){
        head->push(getNextId(), model, name, capasity);
    }else{
        head = new AirplaneNode(getNextId(),model, name, capasity);
        return 1;
    }
};

int AirplaneDLL::dele(int id){
    if(head){
        if(head->getData()->getId() == id){
            AirplaneNode* temp = head;
            head = temp->getNext();
            head->setPrev(nullptr);
            delete temp;
        }else{
            return head->dele(id);
        }
    }else{
        return 1;
    }
};

void AirplaneDLL::printAll(){
    if(head){
        head->print();
    }else{
        cout << "Engin factory skráð" << endl;
    }

};

int AirplaneDLL::getNextId(){ return nextId ++;};