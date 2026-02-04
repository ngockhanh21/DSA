// Linear Search
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {5, 2, 4, 3, 1};
    int key = 3;
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] == key){
            cout << "Found at " << i << endl;
            break;
        }
    }
    
    return 0;
}