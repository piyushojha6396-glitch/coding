#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;// no. of vertices

void add_edges(int src,int dest, bool bi_dir= true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
    return;
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"-->";
        for(auto ele:graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cin>>v;
    int edges;
    cin>>edges;
    graph.clear();
    graph.resize(v,list<int>());
    while(edges--){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    display();
}