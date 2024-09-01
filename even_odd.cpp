#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    int pro = 1, sum = 0;

    if(N % 2 != 0){
        while(N > 0){
            int ld = N % 10;
            pro *= ld;
            N = N/10;
        }
        cout << pro;
        return 0;
    }
    else{
        while(N > 0){
            int ld = N % 10;
            sum += ld;
            N = N/10;
        }
        cout << sum;
        return 0;
    }

    return 0;
}