#include<bits/stdc++.h>
using namespace std;
#define long long ll;
vector<vector<int>> ans;
/*
0 1
0 2
1 3
2 3
1 4
4 6
4 5
5 6

*/



int v; // no. of vertices
vector<list<int> > graph;
unordered_set<int> visited;

void add_edge(int src,int dest, bool bi_dir=true){

    graph[src].push_back(dest);

    if(bi_dir){
        graph[dest].push_back(src);
    }
    return;

}

void dfs(int curr,int dest,vector<int> &path) {
    if(curr==dest) {
        path.push_back(curr);
        ans.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour: graph[curr]){

        if(visited.count(neighbour)==0){ // not visited
           dfs(neighbour,dest,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;


}
void display_All_paths(){

    for(auto s:ans){
        cout<<"{";
        for(auto ele:s){
            cout<<ele<<",";
        }
        cout<<"},";
    }
}
void solve(){
    cout<<"No of vertices ";
    cin>>v;
    int e;
    cout<<"No of edges ";
    cin>>e; // denotes no. of edges;
    graph.resize(v,list<int>());
    visited.clear();
    ans.clear();

    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);

    }
    int src,dest;
    cin>>src>>dest;
    vector<int>path;
    dfs(src,dest,path);   
    return;

}

int main() {
    int t;
    cout<<"no  of test cases ";
    cin>>t;
    while(t--){
        solve();
    }
    display_All_paths();   
    return 0;

}