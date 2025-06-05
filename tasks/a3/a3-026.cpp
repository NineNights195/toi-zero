#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char picture01[n][m],picture02[n][m];
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<m ; j++)
            cin >> picture01[i][j];
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<m ; j++)
            cin >> picture02[i][j];
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(picture01[i][j]=='-' && picture02[i][j]=='x')
                picture01[i][j]='x';
            else if(picture01[i][j]=='+' && picture02[i][j]=='x')
                picture01[i][j]='*';
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++)
            cout << picture01[i][j];
        cout << endl;
    }
}