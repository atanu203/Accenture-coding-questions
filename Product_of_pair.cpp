#include<bits/stdc++.h>
using namespace std;

auto comp = [] (int a, int b) {
    return (a > b);
};

void maxProduct(vector<int> arr, int target) {
    int n = arr.size();
    pair<int, int> ans;

    sort(arr.begin(), arr.end(), comp);

    int maxProduct = 0;
    int start = 0, end = n-1;

    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == target){
            if(maxProduct < (arr[start] * arr[end])){
                maxProduct = arr[start] * arr[end];
                ans.first = arr[start];
                ans.second = arr[end];
            }
            start++;
            end--;
        }
        else if(sum < target) end--;
        else start++;
    }

    cout << ans.first << " " << ans.second << endl;
    cout << maxProduct << endl;
}

int main() {
    int N, target;
    cin >> N;
    vector<int> Arr(N);
    for(int i=0; i<N; i++){
        cin >> Arr[i];
    }
    cin >> target;

    maxProduct(Arr, target);

    return 0;
}