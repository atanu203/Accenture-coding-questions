#include<bits/stdc++.h>
using namespace std;

int climbStair(int N, int M) {
    int mStair = N / M;
    int oneStair = N % M;
    int totalJump = mStair + oneStair;

    return totalJump;
}

int main() {
    int n, m;
    cin >> n >> m;

    int ans = climbStair(n, m);

    cout << ans;

    return 0;
}