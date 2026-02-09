#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int n,int idx,int arr[]){
    
    if(idx==n-1) return arr[idx];
    return arr[idx]+ simpleArraySum(n,idx+1,arr);
}

int main(){
    int arr[]={1,3,4,5,6,7};
    cout<<simpleArraySum(6,0,arr);
}
