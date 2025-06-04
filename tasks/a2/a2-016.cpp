#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    char lotChar,priceChar;
    string lot,price;
    cin >> lotChar >> lot >> priceChar >> price;
    if(lotChar == priceChar && lot == price) cout << "1000000";
    else if(lot == price && lotChar != priceChar) cout << "100000";
    else if(lot.substr(2, 3) == price.substr(2, 3) && lotChar == priceChar) cout << "2000";
    else if(lot.substr(2, 3) == price.substr(2, 3) && lotChar != priceChar) cout << "200";
    else if(lot.substr(3, 2) == price.substr(3, 2) && lotChar == priceChar) cout << "1000";
    else if(lot.substr(3, 2) == price.substr(3, 2) && lotChar != priceChar) cout << "100";
    else if(lotChar == priceChar) cout << "20";
    else cout << "0";
}