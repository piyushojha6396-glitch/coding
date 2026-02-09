#include<bits/stdc++.h>
using namespace std;
vector<list<pair<int,int>>> graph;
int v;

void add_edges(int src,int dest,int weight,bool bi_dir=true){

    graph[src].push_back({dest,weight});
    if(bi_dir){
        graph[dest].push_back({src,weight});
    }


}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"--->";
        for(auto ele:graph[i]){
            cout<<"("<<ele.first<<","<<ele.second<<") ";
        }
        cout<<endl;
    }
}

int main(){
    cin>>v;
    int edges;
    cin>>edges;
    graph.clear();
    graph.resize(v,list<pair<int,int>>());
    while(edges--){
        int s,d,weight;
        cin>>s>>d>>weight;
        add_edges(s,d,weight);
    }

    display();
}