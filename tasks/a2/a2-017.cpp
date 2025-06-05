#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char size,type,topping;
    int price,toppingCount;
    cin >> size >> type;
    if(type=='R')
        switch(size){
            case 'S': price=60; break;
            case 'M': price=80; break;
            case 'L': price=100;
        }
    else
        switch(size){
            case 'S': price=80; break;
            case 'M': price=100; break;
            case 'L': price=120;
        }
    cin >> topping;
    if(topping=='N')
        cout << price;
    else{
        cin >> toppingCount;
        switch(topping){
            case 'P': cout << price+(toppingCount*15); break;
            case 'E': cout << price+(toppingCount*10);
        }
    }

}