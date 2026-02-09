#include<iostream>
using namespace std;
// 0x61ff0c
int main(){
    int s=5;
    cout<<s<<endl;
    cout<<&s<<endl;
    int* p=&s;
    cout<<"p-> "<<p<<endl;
    cout<<*p<<endl;
    *p=10;
    cout<<s<<endl;
    cout<<*p<<endl;

}