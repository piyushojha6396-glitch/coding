#include<iostream>
using namespace std;
int main(){
    int r,c; //r--->rows or no. of lines and c--->coloum or no. of patterns
    cout<<"Enter number of rows ";
    cin>>r;
    cout<<"enter number of coloums ";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}