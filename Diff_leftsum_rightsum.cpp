#include<bits/stdc++.h>
using namespace std;

int diffOfLsumRsum(vector<int> Arr, int k) {
    int N = Arr.size();
    int leftSum = 0, rightSum = 0;
    for(int i=k-1; i>=0; i--){
        leftSum += Arr[i];
    }
    for(int i=k+1; i<N; i++){
        rightSum += Arr[i];
    }
    int diffSum = abs(leftSum - rightSum);

    return diffSum;
}

int main() {
    int size, k;
    cin >> size;
    vector<int> Nums(size);
    for(int i=0; i<size; i++){
        cin >> Nums[i];
    }
    cin >> k;

    cout << diffOfLsumRsum(Nums, k);

    return 0;
}