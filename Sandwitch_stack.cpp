#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int ln = str.length();

    int i = 0, j = 1;
    int count = 0;
    while(i < ln && j < ln){
        if(str[i] == str[j]){
            count++;
            i = j+1;
            j = i+1;
        }
        else{
            j++;
        }
    }

    cout << count;

    return 0;
}