#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> arr, int target) {
    vector<int> ans(2, -1); // Initialize to -1 to handle no valid pair
    int prod = 0;

    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    int st = 0, end = n - 1;
    while (st < end) {
        int sum = arr[st] + arr[end];

        if (sum == target) {
            if (prod < arr[st] * arr[end]) {
                prod = arr[st] * arr[end];
                ans[0] = arr[st];
                ans[1] = arr[end];
            }
            st++;
            end--;
        } else if (sum < target) {
            end--;  // If the sum is smaller, move the right pointer to a smaller value
        } else {
            st++;   // If the sum is larger, move the left pointer to a smaller value
        }
    }

    if (ans[0] != -1 && ans[1] != -1) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target:";
    cin >> target;

    solve(n, arr, target);
    return 0;
}