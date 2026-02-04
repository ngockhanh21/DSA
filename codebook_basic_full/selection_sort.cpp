// Selection Sort
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 2, 4, 3, 1};
    
    for (int i = 0; i < v.size(); i++) {
        int minIdx = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIdx])
                minIdx = j;
        }
        swap(v[i], v[minIdx]);
    }
    
    for (int x : v)
        cout << x << ' ';
    
    return 0;
}