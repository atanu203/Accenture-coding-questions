/*
Given a number N your Task is to make N a single digit number by performing these operations

1) If N is odd , make it floor(N/2)
2) If N is even, make it floor((N-2)/2)
3) If N is already a single digit , print as it is ==
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    int ans;

    if(N > 9){
        if(N % 2 != 0) ans = floor(N/2);
        else if(N % 2 == 0) ans = floor((N-2))/2;
    }
    ans = N;

    cout << ans << endl;

    return 0;
}