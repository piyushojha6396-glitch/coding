#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,int>

vector<list<pi>> graph;

void add_edge(int src, int dest, int wt, bool bi_dir= true) {
    graph[src].push_back({dest,wt});

    if(bi_dir){
        graph[dest].push_back({src,wt});
    }
    return;
}

pair<vector<int>,unordered_map<int,int>> Dijkstra(int src,int n) {

    unordered_map<int,int> mp;

    vector<int> via(n,-1);

    unordered_set<int> visited;
    priority_queue<pi,vector<pi>,greater<pi>> pq; // min heap... {dist,vertice}
    pq.push({0,src});
    for(int i=0;i<n;i++) {
        mp[i]= INT_MAX;
    }

    mp[src]= 0;

    while(!pq.empty()) {
        auto curr= pq.top();
        pq.pop();
        int curr_dist= curr.first;
        int curr_vertices= curr.second;
        if(visited.count(curr_vertices)) continue;
        visited.insert(curr_vertices);
        for(auto neighbour: graph[curr_vertices]){
            int neighbour_vertices= neighbour.first;
            int neighbour_wt= neighbour.second;
            if(!visited.count(neighbour_vertices) && mp[neighbour_vertices]> neighbour_wt+curr_dist){
                pq.push({neighbour_wt+curr_dist, neighbour_vertices});
                mp[neighbour_vertices]= neighbour_wt+curr_dist;
                via[neighbour_vertices]= curr_vertices;
            }
        }
    }


    return {via,mp};
}

void path(vector<int> &via,int dest,int src){
    if(src==dest){
        cout<< src<<" ";
        return;
    }
    cout<<dest<<" ";
    //cout<<via[dest]<<" ";
    return path(via,via[dest],src);
}

int main(){

    int n,m;
    cin>>n>>m;
    graph.resize(n,list<pi>());

    while(m--) {
        int src,dest,wt;
        cin>>src>>dest>>wt;
        add_edge(src,dest,wt);
    }
    cout<<"enter source"<<endl;
    int src;
    cin>>src;
    auto shortest= Dijkstra(src,n);
    unordered_map<int,int> shortest_dist= shortest.second;
    vector<int> via= shortest.first;
    cout<<"Dst dalo..."<<endl;
    int dest;
    cin>>dest;
    cout<<shortest_dist[dest]<<endl;
    cout<<"the path will be: "<<"\n";
    path(via,dest,src);

    return 0;
}