#include<bits/stdc++.h>

using namespace std;
#define ll long long
# define pi pair<int,int>
vector<list<pi>> gr;

void add_edge(int src,int dest,int wt,bool bi_dir= true){
    gr[src].push_back({dest,wt});
    if(bi_dir){
        gr[dest].push_back({src,wt});
    }
    return;
}

int Prims(int src,int n){

    priority_queue<pi,vector<pi>,greater<pi>>pq; // min heap --->  pq will contain {wt,vertices} as a pair
    unordered_set<int> vis;
    pq.push({0,src});
    vector<int> par(n+1);
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[i]=INT_MAX;
    }
    mp[src]= 0;

    int node_count=0;
    int result=0;
    while(node_count < n && !pq.empty()){  // node count ho rha h kruskal me edge count hota h... 
        auto curr= pq.top();
        pq.pop();

        int curr_wt= curr.first;

        int curr_vertice= curr.second;

        if(vis.count(curr_vertice)) continue;
        vis.insert(curr_vertice);

        node_count++;
        result += curr_wt;
        
        for(auto neighbour: gr[curr_vertice]){  // neigHbour v  pair h <vertex,wt> ka
            if(! vis.count(neighbour.first) && mp[neighbour.first]> neighbour.second){
                pq.push({neighbour.second,neighbour.first});  //<wt,vertex> priorityQueue pair
                par[neighbour.first]= curr_vertice;
                mp[neighbour.first]= neighbour.second;
            }
        }

    }
    return result;

}


int main(){
    int n,m;
    cin>>n>>m;
    gr.resize(n+1,list<pi>());

    while(m--){
        int src,dest,wt;
        cin>>src>>dest>>wt;

        add_edge(src,dest,wt);
    }
    int src;
    cin>>src;
    cout<<Prims(src,n)<<endl;

    return 0;
}