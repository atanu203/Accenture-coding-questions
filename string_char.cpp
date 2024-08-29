#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    int ln = str.length();
    int pos;
    cin >> pos;

    int sum = 0;
    string ch = "";
    for(int i=1; i<ln; i+=2){
        sum += str[i] - '0';
        if(sum >= pos){
            ch += str[i-1];
            cout << ch;
            return 0;
        }
    }
    cout << "-1";

    return 0;
}