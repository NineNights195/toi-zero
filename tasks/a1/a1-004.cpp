#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int exercise , midterm , final;
    cin >> exercise >> midterm >> final;
    string result = (exercise >= 5 && midterm >= 20 && final >= 25) ? "pass" : "fail";
    cout << result;
}