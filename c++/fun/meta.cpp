#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("C:\\Users\\piyus\\Downloads\\final_product_chapter_1_input.txt", "r", stdin);
    freopen("C:\\Users\\piyus\\OneDrive\\Desktop\\coding\\c++\\fun\\output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    if(!(cin>>testCases)) return 0;
    for(int caseNum=1;caseNum<=testCases;++caseNum){
        int size; long long upperLimit, target;


        cin>>size>>upperLimit>>target;
        long long divisor=1;
        for(long long d=1;d*d<=target; ++d){
            if(target % d==0){

                long long pairDiv=target / d;
                if(d<=upperLimit) divisor=max(divisor, d);
                if(pairDiv<=upperLimit) divisor=max(divisor, pairDiv);
            }
        }
        if(divisor==0) divisor=1;
        long long quotient=target/divisor;
        vector<long long> result(2 * size, 1);
        result[0]=divisor;
        result[size]=quotient;
        cout <<"Case #"<<caseNum<< ": ";
        for(int i=0;i< 2*size;i++){
            cout<<result[i]<<(i+1==2*size?'\n':' ');
        }
    }
    return 0;
}