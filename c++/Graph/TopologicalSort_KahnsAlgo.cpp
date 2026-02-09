#include<bits/stdc++.h>

using namespace std;

int v; // number of vertices in a graph

vector<list<int>> graph;

void add_edge(int u,int v, bool bi_dir=true){

    graph[u].push_back(v);
    if(bi_dir){
        graph[v].push_back(u);
    }

    return;
}
void topo(){
    vector<int> indegree(v,0);

    for(int i=0;i<v;i++){
        for(auto neighbour:graph[i]){
            indegree[neighbour]++;
        }
    }
    queue<int> qu;
    set <int> vis;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            qu.push(i);
            vis.insert(i);
        }
    }
    while(! qu.empty()){
        int node= qu.front();
        qu.pop();
        cout<<node<<" ";
        for(auto neighbour: graph[node]){
            if(! vis.count(neighbour)) {
                indegree[neighbour]--;
                
            }
            if(indegree[neighbour]==0){
                qu.push(neighbour);
                vis.insert(neighbour);
            }
        }


    }
    cout<<endl;
    cout<<"Topological Sort is Done "<<endl;
    return;
 }


int main(){

    cin>>v;

    int e; // no of edges in a graph
    cin>>e;
    graph.resize(v,list<int>());

    while(e--){
        int u,v;
        bool bi_dir;
        cout<<"give the src and dest to add edges... "<<endl;
        cin>>u>>v>>bi_dir;
        add_edge(u,v,bi_dir);
        cout<<"edge added successfully..."<<endl;
    }
    cout<<"topoSort"<<endl;
    topo();
    return 0;
}