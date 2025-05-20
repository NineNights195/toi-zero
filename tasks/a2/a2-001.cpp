#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int redReflectTime,blueReflectTime;
    cin >> redReflectTime >> blueReflectTime;
    int red[redReflectTime],blue[blueReflectTime],intersectionPoint=1;

    for(int i=0 ; i<redReflectTime ; i++)
        cin >> red[i];
    for(int i=0 ; i<blueReflectTime ; i++)
        cin >> blue[i];

    int redPoint=red[0],redCount=0;
    int i=0;

    // คำนวณจำนวนจุดตัด
    while(i<blueReflectTime){
        cout << "redPoint = " << redPoint << " , blue = " << blue[i] << endl;
        if(blue[i]<=redPoint) {
            intersectionPoint++;
            cout << "intersectionPoint +1" << endl;
            i++;
            cout << "i +1" << endl;
        }
        else{
            if(redPoint==red[redReflectTime-1]){
                i++;
                cout << "i +1" << endl;
            }else{
                redCount++;
                redPoint=red[redCount];
                cout << "redCount = " << redCount << endl;
            }
        }
    }

    cout << intersectionPoint;
}