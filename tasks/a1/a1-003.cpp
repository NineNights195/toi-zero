#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n[3],max=-999999;
    for(int i=0 ; i<3 ; i++){
        cin >> n[i];
        if(n[i] > max)
            max=n[i];
    }
    cout << max;
}