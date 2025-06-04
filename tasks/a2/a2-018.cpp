#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    char color;
    int n;
    cin >> color >> n;
    for(int i=0 ; i<n ; i++)
        if(color=='R'){
            cout << "Red ";
            color='G';
        }else if(color=='G'){
            cout << "Green ";
            color='B';
        }else if(color=='B'){
            cout << "Blue ";
            color='R';
        }
}