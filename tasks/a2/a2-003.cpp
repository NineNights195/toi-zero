#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    int tree[n];
    for(int i=0 ; i<n ; i++)
        cin >> tree[i];
    
    for(int i=0 ; i < n; i++) {
        if(i==0 && tree[i]>=tree[i+1]) count++;
        else if(i>0 && i<n-1 && tree[i]>=tree[i-1] && tree[i]>=tree[i+1]) count++;
        else if(i==n-1 && tree[i]>=tree[i-1]) count++;
    }
    
    cout << count;
}