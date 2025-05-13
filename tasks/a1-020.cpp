#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n[3];
    cin >> n[0] >> n[1] >> n[2];
    if(n[0]<n[1] && n[1]<n[2])
        cout << "increasing";
    else if(n[0]>n[1] && n[1]>n[2])
        cout << "decreasing";
    else
        cout << "neither";
}