#include<bits/stdc++.h>
using namespace std;

int specialFibonacci(int N) {
    int a = 1, b = 1;
    for(int i=0; i<=N; i++){
        int c = b*b + a*a;
        a = b;
        b = c;
    }
    return (b % 47);
}

int main() {

    int num; 
    cin >> num;

    cout << specialFibonacci(num);

    return 0;
}