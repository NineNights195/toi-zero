#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int n,k,t,i=0;
    cin >> n >> k >> t;
    int count=0;
     while(i!=1){
        if(i==0)
            i++;
        if(i!=t){
            count++;
            i+=k;
            if(i>n)
                i-=n;
        }else{
            count++;
            break;
        }
    }
    cout << count;
}