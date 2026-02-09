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
    display();
    
    
}