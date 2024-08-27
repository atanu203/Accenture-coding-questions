#include<bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cin >> num;
    string ans = "";

    while(num > 0){
        ans = ((num % 2) == 0 ? "0" : "1") + ans;
        num = num/2;
    }

    cout << ans;

    return 0;
}