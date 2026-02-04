// BFS
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    vector<vector<int>> adj = {{1,2}, {0,2}, {0,1,3}, {2}};
    vector<bool> vis(n, false);
    queue<int> q;
    
    q.push(0);
    vis[0] = true;
    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << ' ';
        
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
            }
        }
    }
    
    return 0;
}