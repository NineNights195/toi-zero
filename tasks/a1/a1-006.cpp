#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    string result = (n1%n2==0) ? "yes" : "no";
    cout << result;
}