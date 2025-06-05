#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,n,x,mx=0;
	map <int,int> mp;
	cin >> n;
	for (i=0; i<n; i++) {
        cin >> x;		
        if (!mp[x]) 
			mp[x]=1;
		else
			mp[x]++;
		mx=max(mx,mp[x]);
    }
	cout << mx;
	return 0;
}