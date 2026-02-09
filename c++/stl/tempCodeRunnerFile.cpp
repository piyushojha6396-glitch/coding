#include<bits/stdc++.h>
using namespace std;
void Pair_Display(vector<pair<string,int>>& vp){
    cout<<"Printing the pair"<<endl;
    for(auto it=vp.begin();it!=vp.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
int main(){
    vector<pair<string,int>> vp;
    for(int i=1;i<=5;i++){
        string s;
        int num;
        cin>>s>>num;
        vp.push_back({s,num});
    }
    Pair_Display(vp);
    vp[3].second=41;
    Pair_Display(vp);
    // pair<string,int >p1,p2;
    // p1={"Piyush",30};
    // p2={"Varad",40};
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;
}