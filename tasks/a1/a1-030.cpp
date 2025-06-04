#include<bits/stdc++.h>
#include<iostream>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pair[2],moreThan[n];
    bool notOnePair = (n!=1) ? true : false ;
    for(int i=0 ; i<n ; i++){
        cin >> pair[0] >> pair[1];
        if(pair[0] > pair[1])
            moreThan[i]=pair[0];
        else
            moreThan[i]=pair[1];
    }
    if(notOnePair){
        for(int i=0 ; i<n ; i++){
            if(i!=n-1)
                cout << moreThan[i] << " + ";
            else
                cout << moreThan[i] << " = ";
        }
    }
    cout << accumulate(moreThan, moreThan + n, 0);
}