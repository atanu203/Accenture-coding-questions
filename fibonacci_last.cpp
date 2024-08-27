#include<bits/stdc++.h>
using namespace std;

int fiboLast(int N){
    int pre2 = 0, pre1 = 1;
    for(int i=2; i<=N; i++){
        int current = pre2 + pre1;
        pre2 = pre1;
        pre1 = current;
    }
    return pre1;
}

int main() {
    
    int num;
    cin >> num;

    int ans = fiboLast(num);

    cout << ans;

    return 0;
}