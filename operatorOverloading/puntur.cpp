//
// Created by rober on 3/29/2019.
//

#include <iostream>
#include <string>
#include <ostream>

using namespace std;

class Puntur{
private:
    int x;
    int y;
    string desc;
public:
    Puntur();
    Puntur(int, int, string);

    bool operator==(Puntur &other) {
        return this->x == other.getX() && this->y == other.getY();
    }

    bool operator!=(Puntur &other){
        return !(*this == other);
    }

    bool operator<(Puntur &other){
        return this->x < other.getX();
    }

    bool operator>(Puntur &other){
        return other < *this;
    }

    bool operator<=(Puntur &other){
        return !(*this > other);
    }

    bool operator>=(Puntur &other){
        return !(*this < other);
    }

    int getX();
    int getY();
    string getDesc();
    void setX(int);
    void setY(int);
    void setDesc(string);

    void print();
};

Puntur::Puntur() {x=0;y=0;desc="";};
Puntur::Puntur(int x,int y, string desc) {
    this->x = x;
    this->y = y;
    this->desc = desc;
}



int Puntur::getX(){return x;};
int Puntur::getY(){return y;};
string Puntur::getDesc(){return desc;};
void Puntur::setX(int x){this->x = x;};
void Puntur::setY(int y){this->y = y;};
void Puntur::setDesc(string desc){this->desc = desc;};

void Puntur::print() {
    cout << "("<< x << ", " << y << ")" << " , Lýsing: " << desc << endl;
}

ostream& operator<<(ostream &ostr, Puntur &puntur){
    return ostr << "Nafn: " << puntur.getDesc() << "("<< puntur.getX() << ", " << puntur.getY() << ")";
}


int main()
{
    Puntur p = Puntur(3,3,"p1");
    Puntur q = Puntur(3,4,"p2");

    if(p != q){
        cout << "punter eru eins!!" << endl;
    } else{
        cout << "punter eru ekki eins!!" << endl;
    }
    cout << p << endl;
    cout << q << endl;

    return 0;
}