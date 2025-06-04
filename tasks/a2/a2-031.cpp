#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int length,n;
    cin >> length;
    char chromosome[2][length];
    for(int i=0 ; i<length ; i++)
        cin >> chromosome[0][i];
    for(int i=0 ; i<length ; i++)
        cin >> chromosome[1][i];
    
    cin >> n;
    int index,charAt;
    char charChange;
    for(int i=0 ; i<n ; i++){
        cin >> index >> charAt >> charChange;
        chromosome[index-1][charAt]=charChange;
    }
    
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<length ; j++)
            cout << chromosome[i][j] << " ";
        cout << endl;
    }

    int notMatch=0;
    for(int i=0 ; i<length ; i++) {
        char a = chromosome[0][i];
        char b = chromosome[1][i];
        if (!((a == 'A' && b == 'T') || (a == 'T' && b == 'A') || (a == 'C' && b == 'G') || (a == 'G' && b == 'C'))) {
            notMatch++;
        }
    }
    cout << notMatch;
}