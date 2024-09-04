#include<bits/stdc++.h>
using namespace std;

int inversionCount(int arr[], int n){
    int count = 0;
    for(int j=0; j<n; j++){
        for(int k=j+1; k<n; k++){
            if(j < k && arr[j] > arr[k]) count++;
        }
    }
    return count;
}

int main() {
    int size;
    cin >> size;
    int Arr[size];
    for(int i=0; i<size; i++){
        cin >> Arr[i];
    }

    cout << inversionCount(Arr, size);

    return 0;
}