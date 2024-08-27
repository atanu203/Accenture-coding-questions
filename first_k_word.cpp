#include<bits/stdc++.h>
using namespace std;

string firstKword(string str, int k) {
    int ln = str.length();
    int count = 0;
    for(int i=0; i<ln; i++){
        if(str[i] == ' '){
            count++;
            if(count == k){
                return str.substr(0, i);
            }
        }
    }
    return "";
}

int main() {

    string s;
    getline(cin, s);
    int k;
    cin >> k;

    string ans = firstKword(s, k);

    cout << ans;

    return 0;
}