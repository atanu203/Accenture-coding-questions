#include<bits/stdc++.h>
using namespace std;

int sumOfSetbits(int N) {
    int sum = 0;
    while(N > 0){
        sum += (N&1);
        N >>= 1;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;

    cout << sumOfSetbits(num);

    return 0;
}