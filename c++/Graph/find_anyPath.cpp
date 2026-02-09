
#include<bits/stdc++.h>
using namespace std;

int v; // denotes no of vertices
vector<list<int>>graph;
unordered_set<int>visited;

void addEdge(int src,int dest,bool bi_directional=true){

    graph[src].push_back(dest);
    if(bi_directional){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr,int dest){
    if(curr==dest) return true;

    visited.insert(curr);
    for(auto neighbour: graph[curr]){
        if(visited.count(neighbour)==0) {  // not found neighbour of current
            visited.insert(neighbour);
            bool result=dfs(neighbour,dest);
            if(result) return true;
            
        }
    }
    return false;

}

bool anyPath(int src,int dest){
    return dfs(src,dest);
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"--> ";
        for(auto ele: graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return;
}

int main() {
    cin>>v;
    int e;
    cin>>e; // denotes no. of edges;
    graph.resize(v,list<int>());
    visited.clear();

    while(e--){
        int s,d;
        cin>>s>>d;
        addEdge(s,d);

    }
    cout<<" check path exist...";
    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y);
    
}