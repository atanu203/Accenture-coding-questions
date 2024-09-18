#include<bits/stdc++.h>
using namespace std;

int splFib(int N) {
    int a = 1, b = 1;
    int curr;
    if(N == 0 || N == 1) return 1;

    for(int i=2; i<=N; i++){
        curr = ((a*a) + (b*b)) % 47;
        a = b;
        b = curr;
    }

    return (b % 47);
}

int main() {
    int num;
    cin >> num;

    cout << splFib(num);

    return 0;
}