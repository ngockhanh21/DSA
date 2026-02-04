// Code vector, map, set
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    sort(v.begin(), v.end());
    
    map<string, int> mp;
    mp["a"] = 1;
    
    set<int> s;
    s.insert(10);
    
    for(auto x : v)
        cout << x << ' ';
    cout << endl;
    
    return 0;
}