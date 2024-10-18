#include<bits/stdc++.h>
using namespace std;

int teamForm(vector<int> IDs, int n) {
    int evenCnt = 0, oddCnt = 0;
    for(int i=0; i<n; i++){
        if(IDs[i]%2 == 0) evenCnt++;
        else oddCnt++;
    }
    if(evenCnt == oddCnt){
        return evenCnt; // or return oddCnt;
    }
    else{
        return min(evenCnt, oddCnt);
    }
}

int main() {
    vector<int> stuIDs = {5, 2, 6, 3};
    int size = stuIDs.size();

    cout << teamForm(stuIDs, size);

    return 0;
}