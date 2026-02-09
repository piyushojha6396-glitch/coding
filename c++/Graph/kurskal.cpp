#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent,int x){
    if(parent[x]==x) return x;

    return parent[x]= find(parent,parent[x]);
}

bool Union(vector<int> &parent,vector<int> &rank,int a,int b){
    //TC:- O(log*n)

    a=find(parent,a);
    b=find(parent,b);
    if(a==b) return true; //cycle
    if(rank[a]<=rank[b]){
        parent[a]= b;
        rank[b]++;
    }
    else{
        parent[b]=a;
        rank[a]++;
    }
    return false;

}
struct Edges{
    int src;
    int dest;
    int wt;
};

bool cmp(Edges e1, Edges e2){
    return e1.wt < e2.wt;
}
pair<vector<Edges>,int> kurskal(vector<Edges> &input,int n){

    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i]= i;
    }
    sort(input.begin(), input.end(),cmp);
    int min_wt=0;
    vector<Edges> mst_edges;
    int edge_count=0;
    int i=0;
    while(edge_count<n-1 && i< input.size()){
        bool cycle_formed= Union(parent, rank, input[i].src, input[i].dest);
        if(! cycle_formed){
            edge_count++;
            min_wt += input[i].wt;
            mst_edges.push_back(input[i]);
        }
        i++;
    }
    return {mst_edges,min_wt};
}



int main(){
    int nodes,e;
    cin>>nodes>>e;
    vector<Edges> v(e);
    int i=0;
    while(e--){
        cin>>v[i].src>>v[i].dest>>v[i].wt;
        i++;
    }

    auto ans=kurskal(v,nodes);
    vector<Edges> mst_edges= ans.first;
    int min_wt= ans.second;
    for(int i=0;i<mst_edges.size();i++){
        cout<< mst_edges[i].src<<" "<<mst_edges[i].dest<<" "<<mst_edges[i].wt<<endl;
    }
    cout<<endl<<min_wt<<endl;
    return 0;

    

}

