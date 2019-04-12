//
// Created by rober on 3/10/2019.
//

#include "factoryNode.h"
#include "../factory.h"
#include <iostream>

using namespace std;

FactoryNode::FactoryNode(int id, string name, string country){
    this->data = new Factory(id, name, country);
    this->prev = nullptr;
    this->next = nullptr;
    this->nextPlaneId = 1;
};

FactoryNode::FactoryNode(int id, string name, string country, FactoryNode* prev) {
    this->data = new Factory(id, name, country);
    this->prev = prev;
    this->next = nullptr;
    this->nextPlaneId = 1;
}

FactoryNode::FactoryNode(int id, string name, string country, FactoryNode* prev, FactoryNode* next) {
    this->data = new Factory(id, name, country);
    this->prev = prev;
    this->next = next;
    this->nextPlaneId = 1;
}

int FactoryNode::push(int id, string name, string country){
    if(next){
        if(this->getData()->getName() > name) {
            FactoryNode* temp = new FactoryNode(id, name, country, this->prev, this);
            this->setPrev(temp);
            temp->prev->setNext(temp);
            return 1;
        } else{
            return next->push(id,name,country);
        }
    }else{
        this->setNext(new FactoryNode(id, name, country, this));
        return 1;
    }
}

int FactoryNode::dele(int id) {
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

int FactoryNode::makePlane(string model, string name, int capasity) {
    getData()->getFLeet()->push(model, name, capasity);
}

void FactoryNode::print(){
    data->print();
    if(next){
        cout << "---->";
        next->print();
    }else{
        cout << endl;
    }
}

FactoryNode* FactoryNode::getNext(){return next;};
FactoryNode* FactoryNode::getprev(){return prev;};
Factory* FactoryNode::getData() {return data;};
int FactoryNode::setNext(FactoryNode* next){this->next = next;};
int FactoryNode::setPrev(FactoryNode* prev){this->prev = prev;};

