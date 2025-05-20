#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    string result = (year % 4 == 0 && !(year % 100 == 0) || year % 400 == 0 || year <= 1582) ? "yes" : "no";
    cout << result;
}