#include<bits/stdc++.h>
using namespace std;

int maxLength(int arr[], int n) {
    unordered_map<int, int> mp;
    mp[0] = -1;

    int prefixSum = 0;
    int length = 0;

    for(int j=0; j<n; j++){
        prefixSum += (arr[j] == 1 ? 1 : -1);
        if(mp.count(prefixSum)){
            int i = mp[prefixSum];
            length = max(length, j-i);
        }
        else{
            mp[prefixSum] = j;
        }
    }

    return length;
}

int main() {
    
    int size;
    cin >> size;
    int binArray[size];
    for(int i=0; i<size; i++){
        cin >> binArray[i];
    }

    cout << maxLength(binArray, size);

    return 0;
}