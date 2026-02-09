#include<iostream>
using namespace std;
int maze(int er,int ec){
    if(ec==1&&er==1) return 1;
    else if(ec<1 || er<1) return 0;
    int right_path=maze(er,ec-1);
    int down_path=maze(er-1,ec);
    return right_path+down_path;
}

int main(){

    cout<<maze(4,5);
}