/*
The function def ProductSmallestPair(sum, arr) accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair.

NOTE:
Return -1 if array is empty or if n<2
Return 0, if no such pairs found
All computed values lie within integer range

Example:
Input
sum:9
Arr:5 2 4 3 9 7 1
Output
2

Explanation:
Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2
*/

#include<bits/stdc++.h>
using namespace std;

int ProductSmallestPair(int sum, vector<int> arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    if(n == 0 || n < 2) return -1;
    int pro;
    if(arr[0] + arr[1] < sum){
        pro = arr[0] * arr[1];
    }
    else{
        return 0;
    }
    return pro;
}

int main() {
    vector<int> arr = {5, 2, 4, 3, 9, 7, 1};
    int sum = 9;

    int ans = ProductSmallestPair(sum, arr);

    cout << ans;

    return 0;
}