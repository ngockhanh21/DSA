// Binary Search
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int key = 3;
    int l = 0, r = v.size() - 1;
    
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (v[m] == key) {
            cout << "Found at " << m << endl;
            break;
        } else if (v[m] < key) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    
    return 0;
}