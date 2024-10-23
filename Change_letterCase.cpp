#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int upCase = 0, lowCase = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z') upCase++;
        else lowCase++;
    }
    if(upCase > lowCase){
        for(auto& ans : str){
            ans = toupper(ans);
        }
    }
    else{
        for(auto& ans : str){
            ans = tolower(ans);
        }
    }

    cout << str;

    return 0;
}