//
// Created by rober on 3/28/2019.
//

#include <iostream>

#include "airlineNodeDLL.h"
#include "../airline.h"

using namespace std;

AirlineNodeDLL::AirlineNodeDLL(int id, string name, string country) {
    this->data = new Airline(id, name, country);
    this->prev = nullptr;
    this->next = nullptr;
}

AirlineNodeDLL::AirlineNodeDLL(int id, string name, string country, AirlineNodeDLL* prev) {
    this->data = new Airline(id, name, country);
    this->prev = prev;
    this->next = nullptr;
}

AirlineNodeDLL::AirlineNodeDLL(int id, string name, string country, AirlineNodeDLL* prev, AirlineNodeDLL* next) {
    this->data = new Airline(id, name, country);
    this->prev = prev;
    this->next = next;
}


void AirlineNodeDLL::print() {
    data->print();
    if(next){
        next->print();
    }
}

int AirlineNodeDLL::push(int id, string name, string country){
    cout << "push" << endl;
    if(next){
        if(this->getData()->getName() > name) {
            AirlineNodeDLL* temp = new AirlineNodeDLL(id, name, country, this->prev, this);
            this->setPrev(temp);
            temp->prev->setNext(temp);
            return 1;
        } else{
            return next->push(id,name,country);
        }
    }else{
        this->setNext(new AirlineNodeDLL(id, name, country, this));
        return 1;
    }
}

AirlineNodeDLL* AirlineNodeDLL::getNext(){return next;};
AirlineNodeDLL* AirlineNodeDLL::getPrev(){return prev;};
Airline* AirlineNodeDLL::getData(){return data;};
int AirlineNodeDLL::setNext(AirlineNodeDLL* next) {this->next = next;};
int AirlineNodeDLL::setPrev(AirlineNodeDLL* prev) {this->prev = prev;};