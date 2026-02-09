#include<iostream>
using namespace std;
int main(){
    int n=5;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        if(fact<=n)
        cout<<"factorial of "<<i<<" is "<<fact<<endl;

    }
    return 0;
}