#include<iostream>
using namespace std;
int main(){
    int x;
    x=5;
    cout<<x<<" "<<&x<<endl;
    int* var= &x;
    (*var)=(*var)+5;
    cout<<(*var)<<" "<<x<<" "<<&var<<endl;
}
