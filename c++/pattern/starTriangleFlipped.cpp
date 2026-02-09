#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=n;k>=n+1-i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}