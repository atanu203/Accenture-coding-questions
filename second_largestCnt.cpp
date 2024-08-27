#include<bits/stdc++.h>
using namespace std;

int countSecLrgst(int arr[], int n){
    int idx = n-1;
    int count = 0;
    while(idx >= 0 && arr[idx] == arr[n-1]){
        idx--;
    }
    if(idx < 0) return 0;
    else{
        int secLargest = arr[idx];
        while(arr[idx] == secLargest){
            count++;
            idx--;
        }
    }
    return count;
}

int main() {

    int size;
    cin >> size;
    int A[size];
    for(int i=0; i<size; i++){
        cin >> A[i];
    }

    cout << countSecLrgst(A, size);

    return 0;
}