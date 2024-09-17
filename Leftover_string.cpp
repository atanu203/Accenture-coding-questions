#include<bits/stdc++.h>
using namespace std;

string leftoverRemove(string str1, string str2) {
    string ans = "";
    unordered_map<char, int> mpp;

    for(int i=0; i<str1.length(); i++){
        mpp[str1[i]] = 1;
    }
    for(int i=0; i<str2.length(); i++){
        if(mpp.find(str2[i]) != mpp.end()){
            mpp[str2[i]] = 0;
        }
    }
    for(int i=0; i<str1.length(); i++){
        if(mpp[str1[i]] != 0){
            ans += str1[i];
        }
    }

    return ans;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << leftoverRemove(s1, s2);

    return 0;
}