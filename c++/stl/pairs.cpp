#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll combination(ll ele,ll n){
    if(n>ele) return 0;
    ll prd1=1;
    ll prd2=1;
    int x=n;
    while(n--){
        prd1= prd1*ele;
        ele -=1;
        prd2 = prd2*x;
        x--;
    }
    return prd1/prd2;

}
int main(){
    cout<<combination(100000000,3)%998244353;

    // pair<string,int >p1,p2;
    // p1={"Piyush",30};
    // p2={"Varad",40};
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;
}