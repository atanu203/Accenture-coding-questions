#include<bits/stdc++.h>
using namespace std;

int longestSubStr(string str) {
    int maxLen = 0;
    int currLen = 0;

    for(char ch : str){
        if(ch != '.'){
            currLen++;
        }
        else{
            maxLen = max(maxLen, currLen);
            currLen = 0;
        }
    }
    maxLen = max(maxLen, currLen);

    return maxLen;
}

int main() {
    string str;
    getline(cin, str);

    cout << longestSubStr(str);

    return 0;
}