#include<bits/stdc++.h>
using namespace std;
vector<string>result;

vector<string>f(string s,int idx,string t){
    if(idx==s.size()){
        result.push_back(t);
        return result;
    }
    f(s,idx+1,t);
    f(s,idx+1,t+s[idx]);
 
    return result;
}

int main(){
    string s;
    cin>>s;
    vector<string>ans=f(s,0,"");
    for(int i=0;i<ans.size();i++){
        cout<<"{"<<ans[i]<<"} " ;
    }
}