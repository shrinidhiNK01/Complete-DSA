#include <bits/stdc++.h>
using namespace std;

// DP Tabulation
int func(vector<int>& dp, int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

// tc=0(n)
//sc=o(n)


// Space Optimized
int SpaceOptimization(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev2 = 0;
    int prev = 1;

    for (int i = 2; i <= n; i++) {
        int curi = prev2 + prev;
        prev2 = prev;
        prev = curi;
    }

    return prev;
}

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, -1);

    cout << func(dp, n) << endl;
    cout << SpaceOptimization(n) << endl;

    return 0;
}