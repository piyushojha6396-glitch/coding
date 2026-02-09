#include<iostream>
using namespace std;
int fact(int x){
    int prod=1;
    for(int i=1;i<=x;i++){
        prod*=i;
    }
    return prod;
}
int combination(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int permutation(int n,int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n,r;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the value of r: ";
    cin>>r;
    cout<<"the combination is: "<<combination(n,r)<<endl;
    cout<<"the permutation is: "<<permutation(n,r);
    // if(n>r){
    //     int ncr=fact(n)/(fact(r)*fact(n-r));
    //     int npr=fact(n)/fact(n-r);
    //     cout<<"the value of ncr: "<<ncr<<endl<<"the value of npr: "<<npr<<endl;
    // }
    // else{
    //     cout<<"enter the correct value of n and r: ";
    // }
}