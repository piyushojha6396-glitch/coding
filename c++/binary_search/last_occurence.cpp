#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lastOccurence(vector <int> &arr,int x){
    int last_occurence=-1;
    int first_occurence=-1;
    int n=arr.size();
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x&&arr[mid-1]!=x){
                last_occurence=mid;                
                return last_occurence;
            }
            else lo=mid+1;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    return -1;

}
int main(){
    vector<int> v={1,2,3,3,3,4,4,4,4,5};
    int x=5;
    cout<<lastOccurence(v,x);
}
