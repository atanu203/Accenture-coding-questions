#include<bits/stdc++.h>
using namespace std;

int secLrgElmCnt(vector<int> Arr) {
    // set<int> st(Arr.begin(), Arr.end());
    // vector<int> sortArr(st.begin(), st.end());
    // int secMax = sortArr[sortArr.size()-2];
    // int count = 0;
    // for(int i=0; i<Arr.size(); i++){
    //     if(Arr[i] == secMax) count++;
    // }
    // return count;

    // space optimized
    
}

int main() {
    int size;
    cin >> size;
    vector<int> Nums(size);
    for(int i=0; i<size; i++){
        cin >> Nums[i];
    }

    cout << secLrgElmCnt(Nums);

    return 0;
}