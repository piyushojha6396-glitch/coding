#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N, X;
	    cin>>N>>X;
	    vector<int> A(N);
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    vector<int> B(N);
	    for(int i=0;i<N;i++){
	        cin>>B[i];
	    }
	    int win= 0;
	    vector<int> differ(N);
	    for(int i=0;i<N;i++){
	        differ.push_back(B[i]-A[i]);
	    }
	    sort(differ.begin(),differ.end());
	    for(int i=0;i<N;i++){
	        if(differ[i]<0) win++;
	        else if(X>=differ[i]){
                X-=differ[i];
                win++;
            }	            
	        
	    }
	    if(win>(N/2)+1) cout<<"YES";
	    else cout<<"NO";
	}

}