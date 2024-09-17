#include<bits/stdc++.h>
using namespace std;

string subArraySort(vector<int> Arr, int n) {
    vector<int> temp(n);
    for(int i=0; i<n; i++){
        temp[i] = Arr[i];
    }
    sort(temp.begin(), temp.end());

    int start;
    for(start=0; start<n; start++){
        if(temp[start] != Arr[start]) break;
    }

    int end;
    for(end=n-1; end>=0; end--){
        if(temp[end] != Arr[end]) break;
    }

    if(start >= end) return "Yes";

    do{
        start++;
        if(Arr[start-1] < Arr[start]) return "No";
    } while(start != end);

    return "Yes";
}

int main() {
    int size;
    cin >> size;
    vector<int> Nums(size);
    for(int i=0; i<size; i++){
        cin >> Nums[i];
    }

    cout << subArraySort(Nums, size);

    return 0;
}