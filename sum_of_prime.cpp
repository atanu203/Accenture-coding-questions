#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    for(int i=2; i<=sqrt(num); i++){
        if(num%i == 0) return false;
    }
    return true;
}

int sumPrime(int num) {
    int sum = 0;
    for(int i=2; i<=num; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    return sum;
}

int main(){

    int N;
    cin >> N;

    if(N < 2){
        cout << 0;
    }

    int ans = sumPrime(N);

    cout << ans;

    return 0;
}