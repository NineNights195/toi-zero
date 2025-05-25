#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int score[n];
    for(int i=0 ; i<n ; i++)
        cin >> score[i];

    int max=0;
    for(int i=0 ; i<n ; i++)
        if(score[i]>max)
            max=score[i];
    int maxCount=0;
    for(int i=0 ; i<n ; i++)
        if(score[i]==max)
            maxCount++;
    
    cout << max << endl << maxCount;
}