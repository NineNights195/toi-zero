#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int even=0,odd=0,n;
    for(int i=0 ; i<3 ; i++){
        cin >> n;
        if(n%2==0)
            even++;
        else
            odd++;
    }
    cout << "even " << even << endl << "odd " << odd;
}