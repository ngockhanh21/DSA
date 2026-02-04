// DSU / Union-Find
#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, rank;
    
    DSU(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        
        if (rank[x] < rank[y])
            parent[x] = y;
        else {
            parent[y] = x;
            if (rank[x] == rank[y])
                rank[x]++;
        }
    }
};

int main() {
    DSU dsu(5);
    dsu.unite(0, 1);
    dsu.unite(3, 4);
    cout << (dsu.find(0) == dsu.find(1)) << endl;
    return 0;
}