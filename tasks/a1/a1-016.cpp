#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string id;
    cin >> id;
    string result = (id[2] == '1' && id[3] == '6') ? "yes" : "no";
    cout << result;
}