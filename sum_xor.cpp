#include<bits/stdc++.h>
using namespace std;

int sumOfXorSum(int arr[], int n){
    int sum = 0;
    int xorr = 0;

    if(n == 0) return 0;
    if(n == 1) return arr[0];

    xorr = arr[1], sum = arr[0];

    for(int i=2; i<n; i++){
        if(i % 2 == 0) sum += arr[i];
        else xorr ^= arr[i];
    }

    int ans = sum + xorr;

    return ans;
}

int main() {
    int size;
    cin >> size;
    int Arr[size];
    for(int i=0; i<size; i++){
        cin >> Arr[i];
    }

    cout << sumOfXorSum(Arr, size);

    return 0;
}