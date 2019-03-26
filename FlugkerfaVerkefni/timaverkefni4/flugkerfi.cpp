//
// Created by rober on 3/8/2019.
//

#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;


class FlugkerfiDDL{
private:
    class Flugvel{
    private:
        int id;
        int capacity;
        int reserved;
        Flugvel* next;
        Flugvel* prev;
    public:
        Flugvel(int id, int capacity, int reserved = 0){
            this->id = id;
            this->capacity = capacity;
            this->reserved = reserved;
            this->next = NULL;
            this->prev = NULL;
        }


    };

    Flugvel* head;

public:
};