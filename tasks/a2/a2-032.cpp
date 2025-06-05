#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int grid[102][102] = {0};
    
    int k;
    cin >> k;
    
    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        grid[x+1][y+1]++;
    }
    
    int maxSum = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(grid[i][j] == 0) {
                int sum = 0;
                sum += grid[i-1][j-1];  // ซ้ายบน
                sum += grid[i-1][j];    // บน
                sum += grid[i-1][j+1];  // ขวาบน
                sum += grid[i][j-1];    // ซ้าย
                sum += grid[i][j+1];    // ขวา
                sum += grid[i+1][j-1];  // ซ้ายล่าง
                sum += grid[i+1][j];    // ล่าง
                sum += grid[i+1][j+1];  // ขวาล่าง
                
                if(sum > maxSum) {
                    maxSum = sum;
                }
            }
        }
    }
    
    cout << maxSum;
}
