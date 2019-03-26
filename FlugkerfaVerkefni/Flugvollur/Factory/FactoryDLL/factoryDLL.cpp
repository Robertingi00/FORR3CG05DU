//
// Created by rober on 3/10/2019.
//

#include <iostream>
#include "factoryDLL.h"
#include "factoryNode.h"


using namespace std;

FactoryDLL::FactoryDLL() {
    head = nullptr;
}

int FactoryDLL::push(string name, string country){
    if(head){
        if(head->getData()->getName() > name){
            head = new FactoryNode(getNextId(),name, country, nullptr, head);
            head->getNext()->setPrev(head);
            return 1;
        }else{
            return head->getNext()->push(getNextId(),name, country);
        }
    }else{
        head = new FactoryNode(getNextId(), name, country);
        return 1;
    }
};

int FactoryDLL::dele(int id){
    if(head){
        if(head->getData()->getId() == id){
            FactoryNode* temp = head;
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


void FactoryDLL::printAll(){
    if(head){
        head->print();
    }else{
        cout << "Engin factory skráð" << endl;
    }

};

int FactoryDLL::makePlane(string model, string name, int capasity) {
    return head->makePlane(model,name,capasity);
}

int FactoryDLL::getNextId() {return nextId ++;};
FactoryNode* FactoryDLL::getHead(){ return head;};