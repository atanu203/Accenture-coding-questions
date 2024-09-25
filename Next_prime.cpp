#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    for(int i=2; i<=sqrt(num); i++){
        if(num%i == 0) return false;
    }
    return true;
}

int nextPrimeNum(int num) {
    int nxtPrim = num + 1;
    while(!isPrime(nxtPrim)){
        nxtPrim++;
    }
    return nxtPrim;
}

bool isNextPrime(int num, int nextNum) {
    if(!isPrime(num) || !isPrime(nextNum)){
        return false;
    }
    else{
        return (nextPrimeNum(num) == nextNum);
    }
}

int main() {
    int N, nextN;
    cin >> N >> nextN;

    cout << isNextPrime(N, nextN);

    return 0;
}