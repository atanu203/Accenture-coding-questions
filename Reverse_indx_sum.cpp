#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> Arr(N);
    for(int i=0; i<N; i++){
        cin >> Arr[i];
    }

    int sum = 0;
    for(int i=0; i<N; i++){
        int revIndx = N-i-1;
        if(revIndx % 2 == 0){
            sum += Arr[i];
        }
    }

    cout << sum;

    return 0;
}