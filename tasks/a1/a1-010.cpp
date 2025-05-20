#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int age;
    char id;
    cin >> age >> id;
    int ticket = (age < 18 || id == 's' || id == 'S') ? 20 : 50;
    cout << ticket;
}