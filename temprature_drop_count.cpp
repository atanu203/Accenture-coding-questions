#include<bits/stdc++.h>
using namespace std;

int tempDrop(int temps[], int N){
    int count = 0;
    int maxCount = 0;
    for(int i=1; i<N; i++){
        if(temps[i] < temps[i-1]) count++;
        else{
            maxCount = max(maxCount, count);
            count = 0;
        }
    }
    maxCount = max(maxCount, count);
    return maxCount;
}

int main() {
    int days;
    cin >> days;
    int tempList[days];
    for(int i=0; i<days; i++){
        cin >> tempList[i];
    }

    cout << tempDrop(tempList, days);

    return 0;
}