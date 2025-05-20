#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int day,month;
    cin >> month >> day;
    if((month <= 12 && month >= 10) || (month == 9 && day >= 21))
        cout << "fall";
    else if((month <= 9 && month >= 7) || (month == 6 && day >= 21))
        cout << "summer";
    else if((month <= 6 && month >= 4) || (month == 3 && day >= 21))
        cout << "spring";
    else if((month <= 3 && month >= 1) || (month == 12 && day >= 21))
        cout << "winter";
}