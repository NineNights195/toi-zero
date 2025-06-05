// UNFINISHED
// UNFINISHED
// UNFINISHED
// UNFINISHED
// UNFINISHED
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, day = 0;
    cin >> n;
    vector<int> work(n);
    for(int i = 0; i < n; i++)
        cin >> work[i];
    
    bool workedPastMidnight = false;
    
    for(int i = 0; i < n; i++) {
        if(workedPastMidnight) {
            if(work[i] > 18) {
                day++;
                workedPastMidnight = false;
            }
        }
        day++;
        workedPastMidnight = (work[i] > 18);
    }
    if(!workedPastMidnight) {
        day--;
    }
    
    cout << day;
}