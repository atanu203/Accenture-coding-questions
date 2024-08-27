#include<bits/stdc++.h>
using namespace std;

bool isPrime(int indx) {
    if(indx == 0 || indx == 1){
        return false;
    }
    for(int i=2; i<=sqrt(indx); i++){
        if(indx%i == 0) return false;
    }
    return true;
}

int primeIndxSum(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++){
        if(isPrime(i)){
            sum += arr[i];
        }
    }
    return sum;
}

int main() {

    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int ans = primeIndxSum(arr, size);

    cout << ans;

    return 0;
}