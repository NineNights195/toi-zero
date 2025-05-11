#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string txt;
    cin >> txt;
    int n[5] = {0}; // ตั้งให้เป็น 0 ทุกตัว
    char c[5];
    int uniqueCount = 0; // นับว่า เจอไปกี่ตัว
    
    // ลูปแรก ทำตามจำนวน input คือ 5
    for(int i=0 ; i<5 ; i++){
        // สร้าง boolean มาบอกว่าเจอตัวซ้ำไหม (ใช้ในลูปที่สอง)
        bool found = false;
        // ลูปที่สอง เช็คว่าเจอตัวซ้ำไหม ถ้าเจอให้เพิ่มเข้าไปใน n ตำแหน่งนั้นแล้วออกลูป
        for(int j=0 ; j<uniqueCount ; j++){
            if(txt[i] == c[j]){
                n[j]++;
                found = true;
                break;
            }
        }
        // ถ้า found เป็น false คือ หาไม่เจอ ให้เพิ่มเป็นตัวใหม่
        if(!found){
            c[uniqueCount] = txt[i];
            n[uniqueCount] = 1;
            uniqueCount++;
        }
    }
    
    for(int i=0 ; i<uniqueCount ; i++){
        printf("%d%c", n[i], c[i]);
    }
}