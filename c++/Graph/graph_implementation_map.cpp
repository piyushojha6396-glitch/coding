#include<bits/stdc++.h>

using namespace std;
int v; // no. of vertices...
vector<unordered_map<int,int>>graph;


void addEdge(int src,int dest,int wt, bool bi_dirct= true){
    graph[src].insert({dest,wt});
    if(bi_dirct){
        graph[dest].insert({src,wt});
    }
} 
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"--> ";
        for(auto ele:graph[i]){
            cout<<"("<<ele.first<<","<<ele.second<<" )";
        }
        cout<<endl;
    }
}

int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,unordered_map<int,int>());
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        addEdge(s,d,wt);
    }
    display();
}