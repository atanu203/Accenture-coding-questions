#include<bits/stdc++.h>
using namespace std;

int sumOfSecLargestSecSmallest(int arr[], int length) {
    if (length < 4) return 0;

    // Initialize variables for tracking second largest in even and second smallest in odd indices.
    int maxEven = INT_MIN, secMaxEven = INT_MIN;
    int minOdd = INT_MAX, secMinOdd = INT_MAX;

    // Iterate through the array once
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            // For even indices, track the largest and second largest
            if (arr[i] > maxEven) {
                secMaxEven = maxEven;
                maxEven = arr[i];
            } else if (arr[i] > secMaxEven) {
                secMaxEven = arr[i];
            }
        } else {
            // For odd indices, track the smallest and second smallest
            if (arr[i] < minOdd) {
                secMinOdd = minOdd;
                minOdd = arr[i];
            } else if (arr[i] < secMinOdd) {
                secMinOdd = arr[i];
            }
        }
    }

    // If we didn't get at least 2 even or 2 odd numbers, return 0.
    if (secMaxEven == INT_MIN || secMinOdd == INT_MAX) {
        return 0;
    }

    return secMaxEven + secMinOdd;
}

int main() {
    int size;
    cin >> size;
    int nums[size];
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << sumOfSecLargestSecSmallest(nums, size);

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;

int sumOfSecLargestSecSmallest(int arr[], int length){
    if(length == 0 || length <= 3) return 0;

    vector<int> evenList;
    vector<int> oddList;

    for(int i=0; i<length; i++){
        if(i % 2 == 0){
            evenList.push_back(arr[i]);
        }
        else{
            oddList.push_back(arr[i]);
        }
    }

    sort(evenList.begin(), evenList.end());
    sort(oddList.begin(), oddList.end());

    int secLargest = evenList[evenList.size()-2];
    int secSmallest = oddList[1];

    int sum = secLargest + secSmallest;

    return sum;
}

int main() {
    int size;
    cin >> size;
    int nums[size];
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    cout << sumOfSecLargestSecSmallest(nums, size);

    return 0;
}
*/