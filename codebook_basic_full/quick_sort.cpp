// Quick Sort
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& v, int l, int r) {
    int pivot = v[r];
    int i = l - 1;
    
    for (int j = l; j < r; j++) {
        if (v[j] < pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[r]);
    return i + 1;
}

void quickSort(vector<int>& v, int l, int r) {
    if (l < r) {
        int pi = partition(v, l, r);
        quickSort(v, l, pi - 1);
        quickSort(v, pi + 1, r);
    }
}

int main() {
    vector<int> v = {5, 2, 4, 3, 1};
    quickSort(v, 0, v.size() - 1);
    
    for (int x : v)
        cout << x << ' ';
    
    return 0;
}