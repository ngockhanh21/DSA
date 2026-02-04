// Dijkstra
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<vector<pair<int, int>>> adj(n);
    
    // Build graph
    adj[0].push_back({1, 10});
    adj[0].push_back({2, 3});
    adj[2].push_back({1, 1});
    adj[1].push_back({3, 2});
    adj[2].push_back({3, 8});
    adj[3].push_back({4, 7});
    
    // Dijkstra's algorithm
    vector<int> dist(n, INT_MAX);
    dist[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, 0});
    
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;
        
        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    
    // Output distances
    for (int x : dist) {
        cout << x << ' ';
    }
    
    return 0;
}