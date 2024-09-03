#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int N){
    if(N == 0) return 0;

    if(N == 1) return arr[0];

    if(arr[0] > arr[1]) return arr[0];

    if(arr[N-1] > arr[N-2]) return arr[N-1];

    for(int i=1; i<N-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) return arr[i];
    }

    return -1;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << peakElement(arr, size);

    return 0;
}