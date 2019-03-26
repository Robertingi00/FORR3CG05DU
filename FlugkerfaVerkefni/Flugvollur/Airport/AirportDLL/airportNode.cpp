//
// Created by rober on 3/15/2019.
//
#include <iostream>
#include "airportNode.h"
#include "../airport.h"

using namespace std;

AirportNode::AirportNode(int id, string name, string code,string country, AirportNode* prev = nullptr, AirportNode* next = nullptr) {
    this->data = new Airport(id, name, code, country);
    this->prev = prev;
    this->next = next;
}

int AirportNode::push(int id, string name, string code, string country) {
    if(next){
        if(this->getData()->getName() > name) {
            AirportNode* temp = new AirportNode(id, name, code, country, this->prev, this);
            this->setPrev(temp);
            temp->prev->setNext(temp);
            return 1;
        } else{
            return next->push(id,name, code, country);
        }
    }else{
        cout << "ea" <<endl;
        this->setNext(new AirportNode(id, name, code, country, this, nullptr));
        return 1;
    }
};

int AirportNode::dele(int id){
    if(id == data->getId()){
        prev->setNext(next);
        if(next) {
            next->setPrev(prev);
        }
        delete this;
    }else{
        if(next){
            return next->dele(id);
        }else{
            return 1;
        }
    }
};

void AirportNode::print(){
    data->print();
    if(next){
        next->print();
    }
}

int AirportNode::setPrev(AirportNode* prev){this->prev = prev;};
int AirportNode::setNext(AirportNode* next){this->next = next;};
AirportNode* AirportNode::getPrev(){return prev;};
AirportNode* AirportNode::getNext(){return next;};
Airport* AirportNode::getData() {return data;}
