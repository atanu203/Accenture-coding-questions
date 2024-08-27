#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    int prefixSum[n], suffixSum[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    prefixSum[0] = arr[0];
    suffixSum[n-1] = arr[n-1];

    for(int i=1; i<n; i++){
        prefixSum[i] = arr[i] + prefixSum[i-1];
        suffixSum[n-i-1] = arr[n-i-1] + suffixSum[n-i];
    }

    for(int i=0; i<n; i++){
        if(prefixSum[i] == suffixSum[i]){
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}