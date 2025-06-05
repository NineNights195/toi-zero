#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char map[n][m],newMap[n][m];
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<m ; j++){
            cin >> map[i][j];
            newMap[i][j]=map[i][j];
        }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(map[i][j]=='*')
                newMap[i+1][j]='*';
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++)
            cout << newMap[i][j] << " ";
        cout << endl;
    }
}