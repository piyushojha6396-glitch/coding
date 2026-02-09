#include<bits/stdc++.h>
using namespace std;
void printsubset(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
    printsubset(ans+ch,original,idx+1);

    printsubset(ans,original,idx+1);


}
//to store in a vector we follow the follow the following code make a vector and store the substring their ...
void storesubstring(vector<string>&v,string ans,string original,int idx){
    if(idx==original.length()){
        v.push_back(ans);
        return;
    }
    char ch=original[idx];
    storesubstring(v,ans+ch,original,idx+1);

    storesubstring(v,ans,original,idx+1);


}
int main(){
    //printsubset("","abc",0);
    vector<string>v;
    storesubstring(v,"","abc",0);
    //sort(v.begin(),v.end());
    for(string ele:v){
        cout<<ele<<endl;
    }


}