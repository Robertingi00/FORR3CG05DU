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
    FlightNode(int, string, Airport *, Airport *, Airplane *, string, int, int, int, string, int, int, int,
               FlightNode *, FlightNode *);

    int push(int, string, Airport *, Airport *, Airplane *, string, int, int, int, string, int, int, int);
    int dele(int);

    Flight* getData();
};

#endif //FLUGVOLLUR_FLIGHTNODE_H
