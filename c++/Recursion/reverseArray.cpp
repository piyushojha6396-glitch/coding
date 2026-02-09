#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int >&arr,int idx,int n){
    if(idx==n) return;
    swap(arr[idx],arr[n]);
    reverse(arr,idx+1,n-1);
}
int main(){
    vector<int >arr={1,2,3,4,5};
    reverse(arr,0,arr.size()-1);
    for(int ele:arr){
        cout<<ele<<endl;
    }
}