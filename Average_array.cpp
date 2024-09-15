#include<bits/stdc++.h>
using namespace std;

float averageOfArray(vector<int> Arr) {
    int n = Arr.size();
    int sum = 0;
    int count = 0;

    for(int i=0; i<n; i++){
        if(Arr[i]%3 == 0 && Arr[i]%2 == 0){
            sum += Arr[i];
            count++;
        }
    }
    float Avg = sum/count;

    return Avg;
}

int main() {
    int size;
    cin >> size;
    vector<int> nums(size);
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    cout << averageOfArray(nums);

    return 0;
}