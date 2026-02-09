#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

// Sets up fast input/output
void setup_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

void solve() {
    long long k;
    std::cin >> k;

    if (k == 0) {
        std::cout << 0 << std::endl << std::endl;
        return;
    }

    // Step 1: Find the largest M such that M*(M+1)/2 <= K.
    // This can be solved with the quadratic formula: M^2 + M - 2K <= 0
    // The positive root is (-1 + sqrt(1 + 8K)) / 2.
    long long m = (-1 + static_cast<long long>(sqrt(1 + 8.0 * k))) / 2;

    // Step 2: Calculate the remainder.
    long long t_m = m * (m + 1) / 2;
    long long rem = k - t_m;

    // Step 3: Construct the array.
    std::vector<int> a;

    // Part for the remainder
    for (int i = 0; i < rem; ++i) {
        a.push_back(1);
        a.push_back(3);
    }

    // Separator
    a.push_back(2);

    // Part for the triangular number
    for (int i = 0; i < m; ++i) {
        a.push_back(1);
        a.push_back(3);
        a.push_back(2);
    }
    
    // Output the result
    std::cout << a.size() << std::endl;
    for (size_t i = 0; i < a.size(); ++i) {
        std::cout << a[i] << (i == a.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;
}

int main() {
    setup_io();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}