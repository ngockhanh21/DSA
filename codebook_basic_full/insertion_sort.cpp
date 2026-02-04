// Insertion Sort
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 2, 4, 3, 1};
    
    // Insertion sort algorithm
    for (int i = 1; i < v.size(); i++) {
        int key = v[i];
        int j = i - 1;
        
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
    
    // Print sorted array
    for (int x : v)
        cout << x << ' ';
    
    return 0;
}