#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
    else return false;
}

string removeVowel(string str) {
    int ln = str.length();
    string ans = "";

    ans += str[0];
    for(int i=1; i<=ln-2; i++){
        if(isVowel(str[i]) && !isVowel(str[i-1]) && !isVowel(str[i+1])){
            continue;
        }
        else{
            ans += str[i];
        }
    }
    ans += str[ln-1];

    return ans;
}

int main() {
    string strn;
    cin >> strn;

    cout << removeVowel(strn);

    return 0;
}