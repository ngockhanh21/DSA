// DFS
#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<bool>& vis) {
    vis[u] = true;
    cout << u << ' ';
    for (int v : adj[u])
        if (!vis[v])
            dfs(v, adj, vis);
}

int main() {
    int n = 4;
    vector<vector<int>> adj = {{1, 2}, {0, 2}, {0, 1, 3}, {2}};
    vector<bool> vis(n, false);
    
    dfs(0, adj, vis);
    
    return 0;
}