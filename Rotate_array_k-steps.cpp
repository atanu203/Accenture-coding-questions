#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int size, k;
    cin >> size;
    vector<int> Arr(size);
    for(int i=0; i<size; i++){
        cin >> Arr[i];
    }
    cin >> k;

    rotateArray(Arr, k);

    for(int i=0; i<size; i++){
        cout << Arr[i] << " ";
    }

    return 0;
}