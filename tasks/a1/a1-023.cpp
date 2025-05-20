#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int temp;
    char unit;
    cin >> temp >> unit;
    if(unit=='C' || unit=='c'){
        if(temp<=0)
            cout << "solid";
        else if(temp>=0 && temp<=100)
            cout << "liquid";
        else
            cout << "gas";
    }else if(unit=='F' || unit=='f'){
        if(temp<=32)
            cout << "solid";
        else if(temp>=32 && temp<=212)
            cout << "liquid";
        else
            cout << "gas";
    }
}