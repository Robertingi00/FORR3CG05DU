//
// Created by rober on 3/17/2019.
//

#include "../flight.h"

#ifndef FLUGVOLLUR_FLIGHTNODE_H
#define FLUGVOLLUR_FLIGHTNODE_H

class FlightNode {
private:
    Flight *data;
    FlightNode *next;
    FlightNode *prev;
public:
    FlightNode(int, string, Airport *, Airport *, Airplane *, string, int, int, int, string, int, int, int);
    FlightNode(int, string, Airport *, Airport *, Airplane *, string, int, int, int, string, int, int, int, FlightNode*);
    FlightNode(int, string, Airport *, Airport *, Airplane *, string, int, int, int, string, int, int, int, FlightNode*, FlightNode*);

    int dele(int);

    int createFlight(int, string, Airport *, Airport *, Airplane *, string, int, int, int, string, int, int, int);

    void print();

    Flight* getData();
    FlightNode* getNext();
    FlightNode* getPrev();
};

#endif //FLUGVOLLUR_FLIGHTNODE_H
