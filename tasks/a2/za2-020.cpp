// UNFINISHED
// UNFINISHED
// UNFINISHED
// UNFINISHED
// UNFINISHED

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    int passTo[n];
    for(int i=0 ; i<n ; i++){
        cin >> passTo[i];
        --passTo[i];
    }
    bool visted[n];
    fill(visted, visted + n, false);
    
    // เช็คว่ายังมีคนที่ยังไม่ได้เยี่ยมไหม
    auto hasUnvisited = [&visted, &n]() {
        for(int i=0; i<n; i++) {
            if(!visted[i]) return true;
        }
        return false;
    };
    
    while(hasUnvisited()) {
        // หาคนแรกที่ยังไม่ได้เยี่ยม
        int current = 0;
        while(current < n && visted[current]) current++;
        
        // ตามเส้นทางของคนนี้
        while(!visted[current]) {
            visted[current] = true;
            current = passTo[current];
        }
        count++;
    }
    cout << count;
}