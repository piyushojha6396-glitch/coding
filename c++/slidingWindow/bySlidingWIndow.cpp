#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxIdx= 0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum +=arr[i];
    }
    //10+5-7=8 10,8
    int maxSum = sum;
    int i=1;
    int j = k;
    while(j<n){
        int sum = sum + arr[j] - arr[i-1];
        if(maxSum<sum){
            maxSum= sum;
            maxIdx = i;
        }
       // preSum = currSum;
        i++;
        j++;
    }
    // tc o(n);
    cout<<maxSum<<" "<<maxIdx<<endl;
}