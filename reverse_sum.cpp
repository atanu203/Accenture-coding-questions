#include<bits/stdc++.h>
using namespace std;

int reverseSum(int arr[], int N){
    int sum = 0;
    for(int idx=0; idx<N; idx++){
        int revIdx = N - idx - 1;
        if(revIdx % 2 == 0){
            sum += arr[revIdx];
        }
    }
    return sum;
}

int main() {
    int size;
    cin >> size;
    int nums[size];
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    cout << reverseSum(nums, size);

    return 0;
}