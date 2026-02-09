#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"Enter the number to find reverse"<<endl;
    cin>>n;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<"The reverse of the number is "<<rev<<endl;
}