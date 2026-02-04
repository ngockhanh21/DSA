// MST Kruskal
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
            if (rank[x] == rank[y]) rank[x]++;
        }
    }
};

int main() {
    int n = 4;
    vector<tuple<int, int, int>> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    sort(edges.begin(), edges.end(), [](auto &a, auto &b) {
        return get<2>(a) < get<2>(b);
    });

    DSU dsu(n);
    int sum = 0;
    for (auto [u, v, w] : edges) {
        if (dsu.find(u) != dsu.find(v)) {
            dsu.unite(u, v);
            sum += w;
        }
    }

    cout << sum;
    return 0;
}