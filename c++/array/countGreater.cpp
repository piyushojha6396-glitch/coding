#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the arrary : "<<endl;
    cin>>n;
    int arr[n];
    int count=0;
    cout<<"enter the elements in the arrary : "<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element : ";
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}