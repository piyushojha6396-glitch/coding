#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int check){
    if(check==1) return false;
    for(int i=2;i<=sqrt(check);i++){
        if(check%i==0) return false;
    }
    return true;
}
void printprimefactors(int n){
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(isPrime(i)) cout<<i<<" ";
        }
    }
}
int main(){
    printprimefactors(112);
}