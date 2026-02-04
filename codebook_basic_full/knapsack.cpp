// 0/1 Knapsack
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3, W = 50;
    vector<int> w = {10, 20, 30};
    vector<int> v = {60, 100, 120};
    vector<int> dp(W + 1, 0);
    
    for (int i = 0; i < n; i++)
        for (int j = W; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    
    cout << dp[W];
    return 0;
}