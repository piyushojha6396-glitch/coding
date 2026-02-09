#include<iostream>
#include<vector>
using namespace std;
int main(){
    int noz=0;
    int noo=0;
    int notw=0;
    vector<int> v={2,0,2,1,1,0};
    int n= v.size();
    for (int i = 0; i <n; i++)
    {
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else if(v[i]==2) notw++;
    }
    for(int i=0;i<n;i++){
        if(i<noz){
            v[i]=0;
        }
        else if(i<(noz+noo)){
            v[i]=1;
        }
        else  v[i]=2;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}