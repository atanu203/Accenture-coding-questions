#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    for(int i=2; i<=sqrt(num); i++){
        if(num%i == 0) return false;
    }
    return true;
}

string googlyPrime(int N) {
    int num = 0;
    while(N > 0){
        int digit = N % 10;
        num += digit;
        N = N/10;
    }
    if(isPrime(num)) return "YES";
    else return "NO";
}

int main() {

    int number;
    cin >> number;

    string ans = googlyPrime(number);

    cout << ans;

    return 0;
}