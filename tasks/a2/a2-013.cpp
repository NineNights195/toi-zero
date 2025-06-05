#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    char pearl,tea;
    int pearlGram,sweetness,volume,energy=0;
    
    cin >> pearl >> pearlGram;
    switch(pearl){
        case 'H': energy+=5*pearlGram; break;
        case 'O': energy+=3*pearlGram; break;
        case 'J': energy+=2*pearlGram;
    }

    cin >> tea >> sweetness >> volume;
    if(tea=='R')
        switch(sweetness){
            case 1: energy+=12*volume; break;
            case 2: energy+=18*volume; break;
            case 3: energy+=25*volume;
        }
    else if(tea=='T')
        switch(sweetness){
            case 1: energy+=15*volume; break;
            case 2: energy+=20*volume; break;
            case 3: energy+=30*volume;
        }
    else
        switch(sweetness){
            case 1: energy+=10*volume; break;
            case 2: energy+=15*volume; break;
            case 3: energy+=20*volume;
        }
    cout << energy;
}