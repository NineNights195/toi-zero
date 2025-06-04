#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int array[5][5];
    for(int i=0 ; i<5 ; i++)
        for(int j=0 ; j<5 ; j++)
            cin >> array[i][j];

    int row=-1,col=-1;
    int rowCount=0,colCount=0;

    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++)
            rowCount+=array[i][j];
        if(rowCount%2!=0)
            row=i;
        rowCount=0;
    }

    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++)
            colCount+=array[j][i];
        if(colCount%2!=0)
            col=i;
        colCount=0;
    }

    cout << row << " " << col;
}