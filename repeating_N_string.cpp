#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string str;
    cin >> str;

    string ans = "";

    while(N > 0){
        ans += str;
        N--;
    }

    cout << ans;

    return 0;
}