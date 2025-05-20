#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int year,cc;
    cin >> year >> cc;
    if(year<=1990)
        if(cc<=1500)
            cout << "1250";
        else if(cc<=2000)
            cout << "1400";
        else cout << "2000";
    else if(year>=1991 && year<=1999)
        if(cc<=1500)
            cout << "1100";
        else if(cc<=2000)
            cout << "1300";
        else cout << "1700";
    else
        if(cc<=1500)
            cout << "1000";
        else if(cc<=2000)
            cout << "1200";
        else cout << "1500";
}