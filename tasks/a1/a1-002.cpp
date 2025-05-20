#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int money,ten=0,five=0,two=0,one=0;
    cin >> money;
    while(money>0){
        if(money>=10){
            ten++;
            money-=10;
        }else if(money>=5){
            five++;
            money-=5;
        }else if(money>=2){
            two++;
            money-=2;
        }else if(money>=1){
            one++;
            money-=1;
        }
    }
    cout << "10 = " << ten << endl
         << "5 = " << five << endl
         << "2 = " << two << endl
         << "1 = " << one << endl;
}