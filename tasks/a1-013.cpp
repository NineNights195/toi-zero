#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string degit;
    char c;
    cin >> c >> degit;
    if(c=='H' && degit=="4567")
        cout << "safe unlocked";
    else if(c!='H' && degit=="4567")
        cout << "safe locked - change char";
    else if(c=='H' && degit!="4567")
        cout << "safe locked - change degit";
    else
        cout << "safe locked";
}