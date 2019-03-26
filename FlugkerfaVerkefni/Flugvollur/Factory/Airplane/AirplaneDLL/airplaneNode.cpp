//
// Created by rober on 3/14/2019.
//
#include <iostream>
#include "airplaneNode.h"
#include "../airplane.h"

using namespace std;

AirplaneNode::AirplaneNode(int id, string model, string name, int capasity) {
    this->data = new Airplane(id, model, name, capasity);
    this->prev = nullptr;
    this->next = nullptr;
}

AirplaneNode::AirplaneNode(int id, string model, string name, int capasity, AirplaneNode* prev) {
    this->data = new  Airplane(id, model, name, capasity);
    this->prev = prev;
    this->next = nullptr;
}

AirplaneNode::AirplaneNode(int id, string model, string name, int capasity,AirplaneNode* prev, AirplaneNode* next) {
    this->data = new Airplane(id, model, name, capasity);
    this->prev = prev;
    this->next = next;
}

int AirplaneNode::push(int id, string model, string name, int capasity){
    if(next){
        return next->push(id, model, name, capasity);
    }else{
        this->setNext(new AirplaneNode(id, model, name, capasity, this));
        return 1;
    }
}

int AirplaneNode::dele(int id) {
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
}

void AirplaneNode::print() {
    data->print();
    if(next){
        cout << "--->";
        next->print();
    } else{
        cout << endl;
    }
}


Airplane* AirplaneNode::getData(){return data;};
AirplaneNode* AirplaneNode::getNext(){return next;};
AirplaneNode* AirplaneNode::getPrev(){return prev;};
int AirplaneNode::setPrev(AirplaneNode* prev) {this->prev = prev;};
int AirplaneNode::setNext(AirplaneNode* next) {this->next = next;};