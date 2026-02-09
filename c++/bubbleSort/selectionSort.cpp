#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {900,30,8,600,1};
    int idx=-1;
    // for(int i=0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(min>arr[j]){
    //             idx=j;
    //         }
    //     }
    //     swap(arr[i],arr[idx]);
    // }

    // for(int i=1;i<5;i++){
    //     if(min>arr[i]){
    //        min=arr[i];
    //        idx=i;
    //     }
    // }
    // cout<<"min= "<< min<<"\n"<<"idx= "<<idx;
    for(int i=0;i<5;i++){
        int min=arr[i];
        bool flag=0;// 
        for(int j=i+1;j<5;j++){
            if(min>arr[j]){
                min=arr[j];
                idx=j;
                flag=1;
            }
        }
        if(flag==1) 
            swap(arr[i],arr[idx]);


    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}