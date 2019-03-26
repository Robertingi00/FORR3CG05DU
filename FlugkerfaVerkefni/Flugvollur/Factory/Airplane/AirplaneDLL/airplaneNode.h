//
// Created by rober on 3/14/2019.
//

#include "../airplane.h"
#include <string>

#ifndef FLUGVOLLUR_AIRPLANENODE_H
#define FLUGVOLLUR_AIRPLANENODE_H

class AirplaneNode{
private:
    Airplane* data;
    AirplaneNode* prev;
    AirplaneNode* next;
public:
    AirplaneNode(int, string, string, int);
    AirplaneNode(int, string, string, int, AirplaneNode*);
    AirplaneNode(int, string, string, int, AirplaneNode*, AirplaneNode*);

    int push(int, string, string, int);
    int dele(int);

    void print();

    Airplane* getData();
    AirplaneNode* getNext();
    AirplaneNode* getPrev();
    int setNext(AirplaneNode*);
    int setPrev(AirplaneNode*);

};

#endif //FLUGVOLLUR_AIRPLANENODE_H
