#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    char num[2];
    char symbol;
    cin >> num >> symbol;
    int n1=((num[0]-48)*10 + (num[1]-48)) , n2=((num[0]-48) + (num[1]-48)*10);
    if(symbol=='+')
        cout << n1 << " + " << n2 << " = " << n1+n2;
    else
        cout << n1 << " * " << n2 << " = " << n1*n2;
}