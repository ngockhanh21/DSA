// Bubble Sort
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 2, 4, 3, 1};
    
    // Bubble sort algorithm
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
    
    // Output sorted array
    for (int x : v) {
        cout << x << ' ';
    }
    
    return 0;
}