#include<bits/stdc++.h>
using namespace std;

bool validAnagram(string str1, string str2) {
    int ln1 = str1.length();
    int ln2 = str2.length();

    if(ln1 != ln2) return false;

    unordered_map<char, int> mpp;
    for(int i=0; i<ln1; i++){
        mpp[str1[i]]++;
    }
    for(int j=0; j<ln2; j++){
        if(mpp.find(str2[j]) == mpp.end()) return false;
        if(mpp[str2[j]] == 0) return false;
        mpp[str2[j]]--;
    }

    return true;
}

int main() {
    string A, B;
    cin >> A >> B;

    cout << validAnagram(A, B);

    return 0;
}