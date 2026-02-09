#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> &arr,int target){
    int lo=0;
    int n=arr.size();
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>arr[hi] &&arr[mid]>target){
            hi=mid-1;
            
        } 
        else lo=mid+1;

    }
    return hi;
    
}

int main(){
    vector<int > arr={4,5,6,1,2,3};
    cout<<binary_search(arr,2);
}
