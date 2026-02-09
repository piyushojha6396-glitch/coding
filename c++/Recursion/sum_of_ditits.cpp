#include<iostream>
using namespace std;

int digit_sum(int n){
    if(n>=0 and n<=9) return n;
    return n%10 + digit_sum(n/10);
}


int main(){
    int n;
    cout<<"enter the digit: ";
    cin>>n;
    cout<<digit_sum(n);

}

