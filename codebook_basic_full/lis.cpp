// Longest Increasing Subsequence
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {3, 10, 2, 1, 20};
    vector<int> dp(a.size(), 1);

    for (int i = 1; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end());
    return 0;
}