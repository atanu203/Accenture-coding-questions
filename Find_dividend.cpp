#include<bits/stdc++.h>
using namespace std;

int findDividendIndx(vector<int> Arr, int D, int Q, int R) {
    int n = Arr.size();
    int target = (D * Q) + R;
    for(int i=0; i<n; i++){
        if(Arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int N, Divi, Quo, Rem;
    cin >> N;
    vector<int> nums(N);
    for(int i=0; i<N; i++){
        cin >> nums[i];
    }
    cin >> Divi >> Quo >> Rem;

    cout << findDividendIndx(nums, Divi, Quo, Rem);

    return 0;
}