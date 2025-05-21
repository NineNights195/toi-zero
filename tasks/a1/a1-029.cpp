#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char txt[3];
    int vowel=0;
    cin >> txt;
    for(int i=0 ; i<3 ; i++)
        if(txt[i]==97 || txt[i]==101 || txt[i]==105 || txt[i]==111 || txt[i]==117)
            vowel++;
    cout << vowel;
}