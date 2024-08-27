#include<bits/stdc++.h>
using namespace std;

int switchBulb(int state[], int n) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(count%2 == 0){
            if(state[i] == 0) count++;
        }
        else{
            if(state[i] == 1) count++;
        }
    }
    return count;
}

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = switchBulb(arr, n);

    cout << ans;

    return 0;
}