#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    vector<string> arr;
    string temp;
    stringstream ss(str);

    while(getline(ss, temp, '.')){
        arr.push_back(temp);
    }

    int maxLen = 0;

    for(const auto& s : arr){
        if(s.length() > maxLen){
            maxLen = s.length();
        }
    }

    cout << maxLen;

    return 0;
}