//
// Created by rober on 3/28/2019.
//
#include <iostream>

#include "airlineDLL.h"
#include "airlineNodeDLL.h"

using namespace std;

AirlineDLL::AirlineDLL() {
    this->head = nullptr;
    this->nextId = 1;
}

int AirlineDLL::push(string name, string country) {
    if(head){
        if(head->getData()->getName() > name){
            head = new AirlineNodeDLL(getNextId(),name, country, nullptr, head);
            head->getNext()->setPrev(head);
            cout << "head " << endl;

            return 1;
        }else{
            return head->push(getNextId(),name, country);
        }
    }else{
        head = new AirlineNodeDLL(getNextId(), name, country);
        return 1;
    }
}

void AirlineDLL::print() {
    if(head){
        head->print();
    }else{
        cout << "Ekkert Airline skráð" << endl;
    }
}

int AirlineDLL::getNextId(){return nextId++;};

