#include<bits/stdc++.h>
using namespace std;

int posMidElement(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < 0) count++;
    }
    int imgSize = n - count;
    int mid = (imgSize - 1)/2;
    return arr[mid];
}

int main() {
    int size;
    cin >> size;
    int A[size];
    for(int i=0; i<size; i++){
        cin >> A[i];
    }

    cout << posMidElement(A, size);

    return 0;
}