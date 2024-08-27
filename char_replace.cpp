#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    int ln = str.length();
    char ch1, ch2;
    cin >> ch1 >> ch2;

    for(int i=0; i<ln; i++){
        if(str[i] == ch1){
            str[i] = ch2;
        }
        else if(str[i] == ch2){
            str[i] = ch1;
        }
    }

    cout << str;

    return 0;
}