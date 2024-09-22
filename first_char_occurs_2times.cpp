#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_map<char, int> mpp;
    for(auto it : mpp){
        char ch = str[0];
        mpp[ch]++;
        if(it.second == 2){
            cout << it.first;
            break;
        }
    }

    return 0;
}