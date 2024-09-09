#include<bits/stdc++.h>
using namespace std;

bool validPassword(string str) {
    int ln = str.length();
    int cap = 0, numeric = 0;

    if(ln < 4) return false;
    if(isdigit(str[0])) return false;

    for(int i=0; i<ln; i++){
        if(str[i] == ' ' || str[i] == '/') return false;
        if(isdigit(str[i])) numeric++;
        if(isupper(str[i])) cap++;
    }

    return (cap > 0 && numeric > 0);
}

int main() {
    string password;
    cin >> password;

    bool ans = validPassword(password);

    cout << ans << endl;

    return 0;
}
