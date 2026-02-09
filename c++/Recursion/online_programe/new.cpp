#include<bits/stdc++.h>
using namespace std;

int calculateSum(int arr[],int idx,int n,int sum){
    if(idx==n) return sum;
    return calculateSum(arr,idx+1,n,sum+ arr[idx]);
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<calculateSum(arr,0,n,0);
}