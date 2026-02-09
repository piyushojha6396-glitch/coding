#include<bits/stdc++.h>
using namespace std;
vector<unordered_map<int,int>>st;
typedef unordered_map<int,int> mp;

mp addMap(mp& mp1,mp& mp2){
    mp m;
    for(auto x:mp1){
        m.insert(x);
    }
    for(auto x:mp2){
        int key=x.first;
        int freq=x.second;
        if(m.find(key)!=m.end()){ // found 
            m[key] += freq;
        }
        else {  // not found
            m.insert({key,freq});
        }
    }
    return m;
} 
void buildTree(int arr[],int i,int lo,int hi){
    if(lo==hi){
        (st[i])[arr[lo]]=1;
        return;
    }
    int mid=lo+(hi-lo)/2;
    buildTree(arr,2*i+1,lo,mid);
    buildTree(arr,2*i+2,mid+1,hi);
    st[i]= addMap(st[2*i+1],st[2*i+2]);
}


int main(){
    int arr[]={2,4,2,4,6,4,2,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    st.resize(4*n);
    buildTree(arr,0,0,n-1);
    for(int i=0;i<st.size();i++){
        mp map=st[i];
        for(auto x:map){
            cout<<"("<<x.first<<" "<<x.second<<")"<<" ";
        }
        cout<<endl;
    }


}