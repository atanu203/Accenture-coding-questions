#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int N) {
    int mini = INT_MAX;
    int mini2 = INT_MAX;
    for(int i=0; i<N; i++){
        if(arr[i] < mini){
            mini2 = mini;
            mini = arr[i];
        }
        else if(arr[i] < mini2){
            mini2 = arr[i];
        }
    }
    return mini2;
}

int main() {
    int size;
    cin >> size;
    int nums[size];
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    cout << secondSmallest(nums, size);

    return 0;
}