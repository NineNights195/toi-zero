#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        if(i<=2 || n==3){
            for(int j=1 ; j<=i ; j++)
                cout << "0 ";
        }else if(i<n){
            cout << "0 ";
            for(int j=2 ; j<i ; j++)
                cout << "1 ";
            cout << "0 ";
        }else{
            for(int j=1 ; j<=i ; j++)
                cout << "0 ";
        }
        cout << endl;
    }
}