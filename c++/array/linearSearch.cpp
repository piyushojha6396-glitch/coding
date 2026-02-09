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
    int x;
    cout<<"enter the element you want to search : ";
    cin>>x;
    bool flag=false;//means not found..
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"present";
    else cout<<"not present"<<endl;
}
      