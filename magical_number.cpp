#include<bits/stdc++.h>
using namespace std;

int magicalNumber(int N) {
    int count = 0;
    for(int i=1; i<=N; i++){
        int num = i;
        int zero = 0;

        while(num){
            if(num%2 == 0) zero++;
            num = num/2;
        }

        if(zero%2 == 1) count++;
    }
    return count;
}

int main() {

    int num;
    cin >> num;

    int ans = magicalNumber(num);

    cout << ans;

    return 0;
}