#include<iostream>
#include<vector>
using namespace std;
void reverse(int i,int j,vector<int > &v){
    while (i<=j){
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
    vector<int> v;
    v.push_back(5);
    v.push_back(54);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);
    v.push_back(1);
    v.push_back(11);
    v.push_back(58);
    v.push_back(1); 
    display(v);
    int k;
    cin>>k;
    int n=v.size();
    if(k>n) k=k%n; //500%9=
    reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    display(v);

}
