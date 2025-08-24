#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// 0 - based indexing
// for 1 based indexing use size as n+1 , for loop - 1 to <= n

void revDFS(int node, vector<int> &vis, vector<vector<int>> &transpose) {
    cout << node << " ";
    vis[node] = 1;
    for(auto it : transpose[node]) {
        if(!vis[it]) {
            revDFS(it, vis, transpose);
        }
    }
}

void dfs(int node, stack<int> &st, vector<int> &vis, vector<vector<int>> &adj) {
    vis[node] = 1;
    for(auto it : adj[node]) {
        if(!vis[it]) {
            dfs(it, st, vis, adj);
        }
    }
    st.push(node);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    // Step 1 - DFS to fill stack
    stack<int> st;
    vector<int> vis(n, 0);
    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            dfs(i, st, vis, adj);
        }
    }

    // Step 2 - reverse edges
    vector<vector<int>> transpose(n);
    for(int i = 0; i < n; i++) {
        vis[i] = 0;
        for(auto it : adj[i]) {
            transpose[it].push_back(i);
        }
    }

    // Step 3 - process nodes in stack
    while(!st.empty()) {
        int node = st.top();
        st.pop();
        if(!vis[node]) {
            cout << "SCC: ";
            revDFS(node, vis, transpose);
            cout << endl;
        }
    }

    return 0;
}
