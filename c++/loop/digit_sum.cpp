#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the number to find the sum of its digits"<<endl;
    cin>>n;
    int a=n;
    while(n>0)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;

    }
    if(a==0) cout<<0<<endl;
    else cout<<"The sum of digits of the number is "<<sum<<endl;
}