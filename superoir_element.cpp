/*
In an array , a superior element is one which is greater than all the elements To its right side.
The rightmost element itself be a superior element.

You are given a function, -> int Find_Number_Of_Superior_Element(int arr[], int n);

The function accepts an integer array and the size of array, Implement the function to find the total number of superior elements present in array.

Assumptions: N>0 and Array index starts from 0

Input : n = 6
        arr = [8,10,6,2,9,7]
Output: 3
*/

#include<bits/stdc++.h>
using namespace std;

int Find_Number_Of_Superior_Element(vector<int> arr, int n) {
    int count = 0;
    int sup = INT_MIN;
    for(int i = arr.size()-1; i >= 0; i--){
        if(arr[i] > sup){
            count++;
            sup = arr[i];
        } 
    }
    return count;
}

int main() {

    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = Find_Number_Of_Superior_Element(arr, n);

    cout << ans << endl;

    return 0;
}