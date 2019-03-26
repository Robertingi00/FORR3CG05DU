//
// Created by rober on 3/7/2019.
//

#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int main() {
    int n[2];
    cin >> n[0] >> n[1];

    int fPonnukokur[n[0]];

    for(int i = 0; i < n[0]-1; i++){
        fPonnukokur[i] = 0;
    }

    int val[3];

    while(true){
        cin >> val[0] >> val[1] >> val[3];

        if(val[0] == 1){
            if(fPonnukokur[val[1] -1] == 0){
                fPonnukokur[val[1] -1] = 1;
            }else{
                fPonnukokur[val[1] -1] = 0;
            }
        }

        if(val[0] == 2){
            for(int i = 0; i < n[0]; i++) {
                cout << fPonnukokur[i] << " ";
            }
            cout << endl;
        }
    }
}