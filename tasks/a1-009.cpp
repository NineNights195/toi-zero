#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int mid,final;
    cin >> mid >> final;
    cout << mid+final << endl;
    string result = (mid+final>=50) ? "pass" : "fail";
    cout << result;
}