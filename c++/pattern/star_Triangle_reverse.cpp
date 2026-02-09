#include<iostream>
using namespace std;
int main(){
    int n; //r--->rows or no. of lines and c--->coloum or no. of patterns
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}