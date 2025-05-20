#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int min,n;
    for(int i=0 ; i<3 ; i++){
        cin >> n;
        if(n<min || i==0)
            min=n;
    }
    cout << min;
}