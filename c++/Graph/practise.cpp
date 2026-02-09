#include<bits/stdc++.h>

using namespace std;
#define long long ll;

int v; // no. of vertices
vector<list<int> > graph;

//implementation with adjecenty list...
 

void add_edge(int src,int dest, bool bi_dir=true){

    graph[src].push_back(dest);

    if(bi_dir){
        graph[dest].push_back(src);
    }
    return;

}

void display(){

    for(int i=0;i<v;i++){
        cout<<i<<"-->";
        for( auto neighbour: graph[i]){
            cout<<neighbour<<", ";
        }
        cout<<endl;
    }

    return;
}

int main(){
    cout<<"enter the vertives"<<endl; 
    cin>>v;
    graph.resize(v, list<int>());
    int e;// no of edges
    cout<<"enter the no of edges"<<endl;
    cin>>e;
    while(e--){

        int src,dest;
        cin>>src>>dest;
        add_edge(src,dest);

    }
    display();

}