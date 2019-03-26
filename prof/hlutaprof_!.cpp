//
// Created by rober on 2/19/2019.
//

#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

class Nemandi{
public:
    Nemandi();
    Nemandi(int, string);
    Nemandi(int, string, float);
    void prenta();

    int getId(){
        return this->id;
    }
    string getNafn(){
        return this->nafn;
    }

    float getMedaleinkun(){
        return this->medaleinkun;
    }

    int setId(int newId){
        this->id = newId;
    }

    string setNafn(string newNafn){
        this->nafn = newNafn;
    }

    float setMedaleinkun(float newMedaleinkun){
        this->medaleinkun = newMedaleinkun;
    }

private:
    int id;
    string nafn;
    float medaleinkun;
};

Nemandi::Nemandi() {
    this->id = -1;
    this->nafn = "";
    this->medaleinkun = -1;
}

Nemandi::Nemandi(int id, string nafn) {
    this->id = id;
    this->nafn = nafn;
}

Nemandi::Nemandi(int id, string nafn, float medaleinkun) {
    this->id = id;
    this->nafn = nafn;
    this->medaleinkun = medaleinkun;
}

void Nemandi::prenta(){
    cout << "Nemandi, id: "<< this->id << ", Nafn: " << this->nafn <<", Meðaleinkunn: " << roundf(this->medaleinkun * 100)/ 100 << endl;

}


int createNemandi(Nemandi *nemendur, int id, string nafn, float medaleinkun, int fjoldi = 10){

    for(int i = 0; i < fjoldi; i++){
        if(nemendur[i].getId() == -1){
            nemendur[i] = Nemandi(id, nafn, medaleinkun);
            return 0;
        }

    }
    cout << "Það eru ekki laus pláss í gagnagrunninum" << endl;
    return 8;

}

void printAll(Nemandi *nemendur, int fjoldi = 10){
    for(int i = 0; i < fjoldi; i++){
        if(nemendur[i].getId() != -1){
            nemendur[i].prenta();
        }
    }
}

int main()
{
    Nemandi nemendur[10];


   createNemandi(nemendur,1, "Jónas",7.6676);
   createNemandi(nemendur,2, "Pétur", 8.2433);
   createNemandi(nemendur, 3, "Jón", 9.23425);
   createNemandi(nemendur, 4, "Lárus", 10);
   createNemandi(nemendur, 5, "Helgi", 2.132);


   printAll(nemendur);
}
