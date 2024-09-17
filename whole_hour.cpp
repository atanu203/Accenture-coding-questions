#include<bits/stdc++.h>
using namespace std;

int noOfTargetPairs(vector<int> mins) {
    int n = mins.size();
    unordered_map<int, int> mpp;
    int count = 0;

    for(int i=0; i<n; i++){
        int dur = mins[i]/60;
        dur++;

        int req = (60 * dur) - mins[i];
        if(mpp[req] != 0){
            count += mpp[req];
            mpp[req] = 0;
        }
        else{
            mpp[mins[i]]++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<int> arrMins(N);
    for(int i=0; i<N; i++){
        cin >> arrMins[i];
    }

    cout << noOfTargetPairs(arrMins);

    return 0;
}