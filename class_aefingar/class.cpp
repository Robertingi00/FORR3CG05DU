//
// Created by rober on 2/12/2019.
//


#include <iostream>
#include <string>

using namespace std;

class Nemandi{
private:
    int id;
    string nafn;

public:
    Nemandi():id(-1),nafn(""){}
    Nemandi(int id, string nafn){
        this->id = id;
        this->nafn = nafn;
    }
    int getId(){ return id;}
    void prenta(){
        cout << "id: " << id << "nafn: " << nafn << endl;
    }
    //Nemandi(int id, string nafn): id(id), nafn(nafn){}
};


void prentaNemanda(Nemandi *nemar, int fjoldi = 10){
    for(int i = 0; i < fjoldi; i++) {
        if (nemar[i].getId() != -1)
            nemar[i].prenta();
    }
}

void setjaNemendur(Nemandi *nemar, int id, string nafn, int fjoldi = 10){
    for(int i = 0; i < fjoldi; i++) {
        if (nemar[i].getId() == -1){
            nemar[i] = Nemandi(id, nafn);
            return;
        }
    }

}

int main()
{
    Nemandi n = Nemandi(123, "Geir");
    n.prenta();
    Nemandi nemendur[10];
    nemendur[0] = n;
    setjaNemendur(nemendur, 111, "Benni");
    setjaNemendur(nemendur, 222, "Robert");

    prentaNemanda(nemendur);


}