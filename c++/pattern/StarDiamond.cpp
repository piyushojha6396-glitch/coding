#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines: ";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n/2){
            //spaces
            for(int j=1;j<=nsp;j++){
                cout<<" ";
            }
            nsp--;
            for(int k=1;k<=nst;k++){
                cout<<"*";
            }
            nst+=2;
        }
        else{
            //spaces
            for(int q=1;q<=nsp;q++){
                cout<<" ";
            }
            nsp++;
            for(int r=1;r<=nst;r++){
                cout<<"*";
            }
            nst-=2;

        }
        
        cout<<endl;
    }
}