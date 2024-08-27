#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    int k;
    cin >> k;

    int ln = str.length();

    int count = 0;
    int maxi = 0;
    int i = 0, j = -1;

    while(j < k-1){
        if(str[i++] == 'a') count++;
    }
    maxi = count;

    while(j < ln-1){
        if(str[i++] == 'a') count--;
        if(str[++j] == 'a') count++;
        maxi = max(maxi, count);
    }

    cout << maxi;

    return 0;
}