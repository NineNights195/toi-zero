#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char str[5];
    cin >> str;
    for(int i=0 ; i<5 ; i++)
        if(str[i] >= 65 && str[i] <= 90)
            str[i]+=32;
    for(int i=4 ; i>=0 ; i--)
        cout << str[i];
}