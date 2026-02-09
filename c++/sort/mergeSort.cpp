#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int > &a,vector<int > &b,vector<int > &res){
    int i=0,j=0,k=0;
    while ((i<a.size())&&(j<b.size()))
    {
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else{
            res[k++]=b[j++];
        }
        /* code */
    }
    if(i==a.size()-1){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }else{
        while(i<a.size()){
            res[k++]= a[i++];
        }
    }
    
}
void MergeSort(vector<int > &res){
    int n=res.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-(n/2);
    vector <int > a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]= res[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = res[i+n1];
    }
    MergeSort(a);
    MergeSort(b);
    Merge(a,b,res);
}
int main(){
    int arr[]={5,7,0,3,4,1,8,9};         //(0 1 3 4 5 7 8 9 )
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int >v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    MergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}