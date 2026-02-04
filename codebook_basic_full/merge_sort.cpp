// Merge Sort
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& v, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    vector<int> L(n1), R(n2);
    
    for (int i = 0; i < n1; i++)
        L[i] = v[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = v[m + 1 + i];
    
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            v[k++] = L[i++];
        else
            v[k++] = R[j++];
    }
    
    while (i < n1)
        v[k++] = L[i++];
    while (j < n2)
        v[k++] = R[j++];
}

void mergeSort(vector<int>& v, int l, int r) {
    if (l >= r)
        return;
    int m = l + (r - l) / 2;
    mergeSort(v, l, m);
    mergeSort(v, m + 1, r);
    merge(v, l, m, r);
}

int main() {
    vector<int> v = {5, 2, 4, 3, 1};
    mergeSort(v, 0, v.size() - 1);
    for (int x : v)
        cout << x << ' ';
    return 0;
}