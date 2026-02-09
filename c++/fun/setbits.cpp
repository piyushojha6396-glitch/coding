#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    // Create a map to store groups of numbers with the same number of set bits
    unordered_map<int, vector<int>> groups;

    // Group the numbers based on the number of set bits
    for (int i = 0; i < N; i++) {
        int bits = __builtin_popcount(P[i]);
        groups[bits].push_back(P[i]);
    }

    // Sort each group
    for (auto &group : groups) {
        sort(group.second.begin(), group.second.end());
    }

    // Reconstruct the permutation by concatenating the sorted groups
    vector<int> sorted_permutation;
    for (int i = 0; i < N; i++) {
        int bits = __builtin_popcount(P[i]);
        sorted_permutation.push_back(groups[bits].back());
        groups[bits].pop_back();
    }

    // Check if the reconstructed permutation is sorted
    bool flag= true;
    for(int i=0;i<sorted_permutation.size()-1;i++){
        if(sorted_permutation[i]>sorted_permutation[i+1]){
            flag= false;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
