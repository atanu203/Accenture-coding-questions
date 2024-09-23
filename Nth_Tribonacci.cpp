#include<bits/stdc++.h>
using namespace std;

int nthTribonacci(int N) {
    int t1 = 0, t2 = 1, t3 = 1;
    int curr;
    if(N == 0 || N == 1) return 1;
    if(N == 2) return 2;
    for(int i=3; i<=N; i++){
        curr = t1 + t2 + t3;
        t3 = t2;
        t2 = t1;
        t1 = curr;
    }
    return t1;
}

int main() {
    int num;
    cin >> num;

    nthTribonacci(num);

    return 0;
}