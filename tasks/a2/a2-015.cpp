#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int x,y,z,price;
    cin >> x >> y >> z;
    cin >> price;
    cout << (2*x+2*y)*z << endl <<  ((2*x+2*y)*z)*price;
}