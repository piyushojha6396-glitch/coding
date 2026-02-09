#include <bits/stdc++.h>
using namespace std;

int V;
vector<vector<int>> graph;

void add_edge(int u, int w, bool bi_dir = true) {
    graph[u].push_back(w);
    if (bi_dir) graph[w].push_back(u);
}

bool dfs(int curr, int parent, vector<bool> &vis) {
    vis[curr] = true;
    for (auto neighbour : graph[curr]) {
        if (vis[neighbour] && neighbour != parent) return true;
        if (!vis[neighbour]){
            if (dfs(neighbour, curr, vis)) return true;
        }
    }
    return false;
}


bool hasCycle() {
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, visited)) return true;
        }
    }
    return false;
}

int main() {
    cin >> V;
    graph.resize(V);
    int E;
    cin >> E;
    while (E--) {
        int u, w;
        cin >> u >> w;
        add_edge(u, w);
    }
    cout << (hasCycle() ? "CYCLE FOUND" : "NO CYCLE FOUND") << endl;
    return 0;
}