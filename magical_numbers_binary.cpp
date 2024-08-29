#include<bits/stdc++.h>
using namespace std;

int countMagicalNum(int N) {
    int count = 0;
    for(int i=1; i<=N; i++){
        int binSum = 0;
        while(i > 0){
            int lBinDig = i % 2;
            if(lBinDig == 0) binSum += 1;
            if(lBinDig == 1) binSum += 2;
            i = i/2;
        }
        if(binSum % 2 != 0) count++;
    }
    return count;
}

int main() {

    int range;
    cin >> range;

    cout << countMagicalNum(range);

    return 0;
}