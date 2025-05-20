#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string card;
    int num;
    cin >> card;
    
    // Numbers case
    if(card[0] == 49 && card[1] == 48) {
        num=10;
        card = card.substr(2);
        cout << num << " of ";
    }
    else if(card[0] >= 50 && card[0] <= 57) {
        num=card[0]-48;
        card = card.substr(1);
        cout << num << " of ";
    }
    // A,J,Q,K case
    else if(card[0]=='A'){
        cout << "ace of ";
        card = card.substr(1);
    }
    else if(card[0]=='J'){
        cout << "jack of ";
        card = card.substr(1);
    }
    else if(card[0]=='Q'){
        cout << "queen of ";
        card = card.substr(1);
    }
    else if(card[0]=='K'){
        cout << "king of ";
        card = card.substr(1);
    }

    // Suit case
    if(card[0]=='D')
        cout << "diamonds";
    else if(card[0]=='H')
        cout << "hearts";
    else if(card[0]=='S')
        cout << "spades";
    else if(card[0]=='C')
        cout << "clubs";
}
