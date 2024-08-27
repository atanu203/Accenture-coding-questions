/*
Given a string you are requested to determine whether the string should be converted to all uppercase or all lowercase depending on the count of uppercase and lowercase letter in that string.

Example 1:           Example 2:
 AbCdEfG                xYz
Output 1:            Output 2:
ABCDEFG                 xyz
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int upr_cnt = 0;
    int lwr_cnt = 0;

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            upr_cnt++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            lwr_cnt++;
        }
    }

    if(lwr_cnt > upr_cnt){
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;
            }
        }
    }

    if(upr_cnt > lwr_cnt){
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
    }

    cout << str << endl;

    return 0;
}