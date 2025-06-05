#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    int p[n], v[n];
    for(int i = 0; i < n; i++) cin >> p[i] >> v[i];

    int bestValueSoFar = v[n-1];

    for (int i = n-2; i >= 0; --i) {
        if (v[i] < bestValueSoFar) 
            count++;
        else
            bestValueSoFar = v[i];
    }

    cout << count;
}