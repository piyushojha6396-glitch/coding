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

int main(){
    
    int n,m;
    cin>>n>>m; //m--> no of edges...
    vector<int> parent(n+1),rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    while(m--){

        int a;
        int b;
        cin>>a>>b;
        bool result=Union(parent,rank,a,b);
        if(result) {
            cout<<"CYCLE DETECTED"<<endl;
            break;
        }
    }
    return 0;


}


