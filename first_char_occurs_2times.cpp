#include<bits/stdc++.h>
using namespace std;

char repeatedChaaracter(string str) {
    vector<int> freq(26, 0);
    for(int i=0; i<str.length(); i++){
        if(freq[str[i] - 97] == 1){
            return str[i];
        }
        else{
            freq[str[i] - 97]++;
        }
    }
    return -1;
}

int main() {
    string str;
    cin >> str;

    cout << repeatedChaaracter(str);

    return 0;
}