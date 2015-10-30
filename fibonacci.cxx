
//  fibonacci.cpp
//  Ueb.fibonacci
//
//  Created by Saskia Funk on 30.10.15.
//  Copyright © 2015 Saskia Funk. All rights reserved.
//


#include <iostream>
using namespace std;
int main (){
    
    int N, a=0, b=1, c = 0;
    cout << "Zahl für N hier eingeben:" << endl;
    cin >>  N;
    if(N==0)
        c = 0;
    
    for (int i=2; i<N+1; i++){
        c = b+a;
        a = b;
        b = c;
    }
    
    cout << "Ergebnis:" << c << endl;
    
    return 0;
    
}