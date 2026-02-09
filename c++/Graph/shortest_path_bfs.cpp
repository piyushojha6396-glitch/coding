#include<bits/stdc++.h>
using namespace std;

int v; // denotes no of vertices  {0 3 3 1 2 2 1 }
vector<list<int>>graph;
unordered_set<int>visited;

void addEdge(int src,int dest,bool bi_directional=true){

    graph[src].push_back(dest);
    if(bi_directional){
        graph[dest].push_back(src);
    }

}
void bfs(int src,int dest,vector<int> &dist){
    queue<int>qu;
    dist.resize(v,INT_MAX);
    qu.push(src);
    dist[src]=0;

    visited.insert(src);

    while(qu.size()>0){
        int curr=qu.front();
        qu.pop();
        for(auto neighbour : graph[curr]){
            if(visited.count(neighbour)==0){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]= dist[curr]+1;
            }
        }

    }
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
    //display();

    vector<int>dist;
    int x,y;
    cin>>x>>y;

    bfs(x,y,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    
    
}