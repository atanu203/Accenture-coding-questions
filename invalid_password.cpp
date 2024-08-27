#include<bits/stdc++.h>
using namespace std;


bool validPassword(string str) {
    int ln = str.length();

    if(ln < 4) return false;

    if(str[0] - '0' >= 0 && str[0] - '0' <= 9) return false;

    int cap = 0, numeric = 0;

    for(int i=1; i<ln; i++){

        if(str[i] == ' ' || str[i] == '/') return false;

        if(str[0] - '0' >= 0 && str[0] - '0' <= 9) numeric++;

        if(str[i] >= 'A' && str[i] <= 'Z') cap++;
    }

    return (cap > 0 && numeric > 0);
}


int main() {

    string password;
    cin >> password;

    bool ans = validPassword(password);

    cout << ans;

    return 0;
}