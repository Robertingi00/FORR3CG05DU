//
// Created by rober on 3/15/2019.
//

#include "airportDLL.h"
#include "airportNode.h"
#include <iostream>

using namespace std;

AirportDLL::AirportDLL() {
    head = nullptr;
    nextId = 1;
}

int AirportDLL::push(string name, string code, string country){
    if(head){
        if(head->getData()->getName() > name){
            head = new AirportNode(getNextId(),name, code, country, nullptr, head);
            head->getNext()->setPrev(head);
            return 1;
        }else{
            return head->push(getNextId(),name, code,country);
        }
    }else{
        head = new AirportNode(getNextId(),name, code,country, nullptr, nullptr);
        return 1;
    }
};

int AirportDLL::dele(int id){
    if(head){
        if(head->getData()->getId() == id){
            AirportNode* temp = head;
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

void AirportDLL::printAll(){
    if(head){
        head->print();
    }else{
        cout << "Engin factory skráð" << endl;
    }

};


AirportNode* AirportDLL::getHead(){return head;};
int AirportDLL::getNextId() {return nextId ++;};

