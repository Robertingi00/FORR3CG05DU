//
// Created by rober on 3/15/2019.
//
#include <string>
#include "../airport.h"

#ifndef FLUGVOLLUR_AIRPORTNODE_H
#define FLUGVOLLUR_AIRPORTNODE_H

class AirportNode{
private:
    Airport* data;
    AirportNode* next;
    AirportNode* prev;
public:
    AirportNode(int, string, string, string, AirportNode*, AirportNode*);

    int push(int, string, string, string);
    int dele(int);

    int getId();
    Airport* getData();

    int setNext(AirportNode*);
    int setPrev(AirportNode*);
    AirportNode* getNext();
    AirportNode* getPrev();

    void print();

};

#endif //FLUGVOLLUR_AIRPORTNODE_H
