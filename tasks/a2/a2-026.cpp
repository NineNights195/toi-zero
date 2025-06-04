#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string name[n];
    int weight[n];
    for(int i=0 ; i<n ; i++)
        cin >> name[i] >> weight[i];

    int moreThan15=0;
    for(int i=0 ; i<n ; i++)
        if(weight[i]>15)
            moreThan15++;
    
    int maxWeight=weight[0];
    int maxIndex=0;
    for(int i=0 ; i<n ; i++)
        if(weight[i]>maxWeight){
            maxWeight=weight[i];
            maxIndex=i;
        }
    
    cout << moreThan15 << endl << name[maxIndex] << " " << weight[maxIndex];
}