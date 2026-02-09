#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int factor(int n){
    if(isPrime(n)) return n;
    int sum=0;

    while(n>1){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0 && isPrime(i)) sum+=i;
            n/=i;
            break;
        }

    }
    return factor(sum);
}


int main(){
    int n=8;
    cout<<factor(n);
}