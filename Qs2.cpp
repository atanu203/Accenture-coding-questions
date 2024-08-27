/*
You are required to implement the following Function def LargeSmallSum(arr). 
The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest element from the even positions and second smallest from the odd position of given ‘arr’.

Assumption:
All array elements are unique
Treat the 0th position a seven

NOTE:
Return 0 if array is empty
Return 0, if array length is 3 or less than 3

Example:-
Input
arr:3 2 1 7 5 4 -> 1 2 3 4 5 7
Output
7

Explanation:
Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
*/

#include<bits/stdc++.h>
using namespace std;

int LargeSmallSum(vector<int> arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    if(n == 0 || n <= 3) return 0;
    vector<int> even;
    vector<int> odd;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    int m = even.size();
    int secLargest = even[m-2];
    int secSmallest = odd[1];
    int sum = secLargest + secSmallest;
    return sum;
}

int main() {
    vector<int> arr = {3, 2, 1, 7, 5, 4};

    int res = LargeSmallSum(arr);

    cout << res;

    return 0;
}