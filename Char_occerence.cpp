#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    int ln = str.length();
    char ch;
    cout << "Enter target character: ";
    cin >> ch;

    int count = 0;
    for(int i=0; i<ln; i++){
        if(str[i] == ch){
            count++;
        }
    }

    cout << "No. of occerences of the character: " << count;

    return 0;
}