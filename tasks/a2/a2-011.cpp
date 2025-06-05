#include<bits/stdc++.h>
using namespace std;

int main() {
    int n[10];
    for(int i = 0; i < 10; i++) 
        cin >> n[i];

    int unique[10];
    int uniqueCount = 0;

    for(int i = 0; i < 10; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < uniqueCount; j++) {
            if(n[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        
        if(!isDuplicate) {
            unique[uniqueCount] = n[i];
            uniqueCount++;
        }
    }

    for(int i = 0; i < uniqueCount; i++) 
        cout << unique[i] << " ";
}