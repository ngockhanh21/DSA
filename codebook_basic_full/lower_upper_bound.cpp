// Lower/Upper Bound
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 4};
    
    cout << lower_bound(v.begin(), v.end(), 2) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;
    
    return 0;
}