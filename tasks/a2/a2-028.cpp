#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char id01[n],id02[n];
    int count=0;
    bool twin=true;

    for(int i=0 ; i<n ; i++)
        cin >> id01[i];
    for(int i=0 ; i<n ; i++)
        cin >> id02[i];

    for(int i=0 ; i<n ; i++){
    int idNum01=id01[i]-48;
    int idNum02=id02[i]-48;
        if(idNum01+idNum02!=9){
            twin=false;
            count++;
        }
    }
    if(twin)
        cout << "YES";
    else
        cout << "NO " << count;
}