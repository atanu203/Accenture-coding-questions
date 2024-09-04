#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; // number of coconut sweets per box
    int E; // to be consumed per day
    int D; // number of days to be servive
    cin >> N >> E >> D;

    if(N == 0) cout << -1;
    if(E == 0 || D == 0) cout << 0;
    if(N*6 < E*7) cout << -1;
    if(D < 7){
        if((D*E) % N == 0) cout << ((D*E)/N);
        else cout << ((D*E)/N) + 1;
    }

    int ans = 0;
    int weeks = D/7;

    if((weeks * E * 7) % N == 0) ans += (weeks * E * 7)/N;
    else ans += ((weeks * E * 7)/N) + 1;

    int left = (ans * N) - (weeks * E * 7);

    int days = D % 7;
    int req = (days * E) - left;

    if(req % N == 0) ans += (req/N);
    else ans += (req/N) + 1;

    cout << ans;

    return 0;
}