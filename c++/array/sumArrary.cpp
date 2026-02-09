#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the arrary : "<<endl;
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"enter the elements in the arrary : "<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"the sum of elements is "<<sum<<endl;
}