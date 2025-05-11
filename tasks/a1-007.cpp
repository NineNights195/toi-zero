#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    string result = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? "yes" : "no";
    cout << result;
}