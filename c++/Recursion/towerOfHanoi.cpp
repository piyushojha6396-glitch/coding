#include<iostream>
using namespace std;
void TOH(int n,char A, char B,char C){
    if(n==0) return;
    TOH(n-1,A,C,B);
    cout<<A<<"--->"<<C<<endl;
    TOH(n-1,B,A,C);
}
int main(){
    char a='A',b='B',c='C';
    TOH(3,a,b,c);
}