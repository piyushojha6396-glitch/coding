#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d) return a;
    else if(b>c && b>d) return b;
    else if(c>d) return c;
    else return d;
}


int main() {
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<max_of_four(a,b,c,d);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
