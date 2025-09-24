// given an undirected graph, find the minimum path b/w the given two vertices

#include<iostream>
#include<vector>
#include<queue>


using namespace std;


int minEdges(int n, vector<pair<int, int>> &edges, int u, int  v) {
    // int n = edges.size(); we dont need edges size but the total no of edges
    
    vector<vector<int>> adj(n+1);
    
    for(auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
    vector<int> dis(n+1, 0);
    vector<bool> vis(n+1, 0);
    
    queue<int> q;
    q.push(u);
    dis[u] = 0;
    vis[u] = 1;
    
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        
        if(node == v) {
            return dis[node];
        }
        
        for(auto neighbour : adj[node]) {
            if(!vis[neighbour]) {
                vis[neighbour] = 1;
                q.push(neighbour);
                dis[neighbour] = dis[node] + 1;
            }
        }
        
        
    }
    
    return -1;
}

int main() {
    
    int n; // no of vertices/nodes
    cin>>n;
    
    int m; // no. of edges pair
    cin>> m;
    
    vector<pair<int, int>> edges(m);
    for(int i = 0; i<n; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
    }
    
    int u = 1, v = 5;
    
    cout << minEdges(n, edges, u, v) << endl;
    
    return 0;
}
