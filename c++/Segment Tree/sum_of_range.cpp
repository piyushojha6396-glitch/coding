#include<bits/stdc++.h>
using namespace std;

vector<int>st;
// 9,5,4,6,3,2,1,12,19
void display(){
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    return;
}
int rangeSum(int i,int lo,int hi,int& l,int& r){
    
}
void buildTree(int arr[],int i,int lo,int hi){
    if(lo==hi){
        st[i]=arr[lo];
        return;
    }
    int mid=lo+(hi-lo)/2;
    buildTree(arr,2*i+1,lo,mid);
    buildTree(arr,2*i+2,mid+1,hi);
    st[i]= st[2*i+1]+st[2*i+2];
}

int main(){
    int arr[]={9,5,4,6,3,2,1,12,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    st.resize(4*n);
    buildTree(arr,0,0,n-1);
    display();
}