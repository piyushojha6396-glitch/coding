#include<iostream>
using namespace std;

int power(int p,int q){
    if(q==0) return 1;
    return p*power(p,q-1);
}


int main(){
    int p,q,result;
    cout<<"enter the base: ";
    cin>>p;
    cout<<"enter the power: ";
    cin>>q;
    result=1;
    // result=power(p,q);
    // cout<<result;
    for(int i=1;i<=q;i++){
        result*=p;
    }
    cout<<result;
}


