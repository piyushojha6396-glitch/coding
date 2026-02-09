#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,2,1};
    int n=sizeof(arr)/4;
    bool flag=1;   // 1 means sorted
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=0; // 0 means not sordet
            break;
        }

    }
    if(flag==0) cout<<" not sorted";
    else{
        cout<<"sorted";
    }
}