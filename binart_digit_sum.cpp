#include<bits/stdc++.h>
using namespace std;

int binarySum(int N) {
    int binSum = 0;
    while(N > 0){
        binSum += ((N % 2 == 0) ? 0 : 1);
        N = N/2;
    }
    return binSum;
}

int main() {
    int num;
    cin >> num;

    cout << binarySum(num);

    return 0;
}