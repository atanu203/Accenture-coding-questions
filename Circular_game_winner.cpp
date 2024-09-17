#include<bits/stdc++.h>
using namespace std;

int circularGame(int N, int k) {
    int winner = 1;
    for(int i=2; i<=N; i++){
        winner = (winner + (k-1)) % i + 1;
    }
    return winner;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << circularGame(n, k);

    return 0;
}