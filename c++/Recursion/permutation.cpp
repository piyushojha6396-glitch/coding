#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void permuation(vector<string> &str,string ans,string original){
    if(original==""){
        str.push_back(ans);
        return;

    }
    for(int i=0;i<original.size();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permuation(str,ans+ch,left+right);
    }

}
int main(){
    vector<string> str;
    permuation(str,"","123");
    //string str="Piyush Kumar Ojha";
    // string ztr=str.substr(3,0);
    // cout<<ztr<<endl<<str;
    for(string ele:str){
        cout<<ele<<endl;
    }
}