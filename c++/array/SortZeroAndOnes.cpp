#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &v){
    int n = v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }

    }

}
void reverse(int i,int j,vector<int > &v){
    while ((i<=j)){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
        
}
void display(vector<int> a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v={1,0,0,0,0,1,1,1,0,0,0,1};
    display(v);
    sort01(v);
    display(v);

}
