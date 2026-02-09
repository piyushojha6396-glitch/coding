#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent,int x){
    if(parent[x]==x) return x;

    return parent[x]= find(parent,parent[x]);
}

void Union(vector<int> &parent,vector<int> &rank,int a,int b){

    a=find(parent,a);
    b=find(parent,b);
    if(a==b) return;
    if(rank[a]<=rank[b]){
        parent[a]= b;
        rank[b]++;
    }
    else{
        parent[b]=a;
        rank[a]++;
    }

}

int main(){

    int n,m;
    cin>>n,m;
    vector<int> parent(n+1),rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    while(m--){
        string str;
        cin>>str;
        if(str=="Union"){
            int a;
            int b;
            cin>>a>>b;
            Union(parent,rank,a,b);
        }
        else{
            int x;
            cin>>x;
            int result=find(parent,x);
            cout<<result<<endl;
        }
    }
    return 0;


}


