#include <iostream>
#include <string>
#include <ostream>
#include "Projectors/projectors.h"


using namespace std;

ostream& operator<<(ostream &ostr, Projectors &proj){
    return ostr << "Id: " << proj.getId() << ", Upplausn: " << proj.getResolutionX() << "X" << proj.getResolutionY() << ", Birtustig: " <<  proj.getBrightness() << ", Skerpa" <<  proj.getSharpness()<< ":1" << ", Lengd/breidd/hæð: " << proj.getSizeLength() << "/" << proj.getSizeWidth() << "/" << proj.getSizeHeight() << ".";
}


int main() {

    Projectors s1 = Projectors("skar1", 1920, 1080, 5000, 1200,30.53, 20.49, 15.99);
    Projectors s2 = Projectors("skar2", 1920, 800, 5000, 1200,30.53, 20.49, 15.99);

    if(s1 == s2){
        cout << "Þeir eru jafn stórir";
    }

    if(s1 != s2){
        cout << "Þeir eru ekki jafn stórir";
    }


   if(s1 > s2){
       cout << "s1 er stærri" << endl;
       cout << s1 << endl;
   } else{
       cout << "s1 er minni";
   }

    if(s1 < s2){
        cout << "s1 er stærri" << endl;
        cout << s1 << endl;
    } else{
        cout << "s1 er stærri";
    }


    return 0;
}