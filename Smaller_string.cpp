#include<bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int i = 0, j = 0;
    while(i < str1.length() && j < str2.length()){
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);
        if(ch1 > ch2){
            cout << -1;
            return 0;
        }
        else if(ch1 < ch2){
            cout << 1;
        }
        i++;
        j++;
    }

    return 0;
}