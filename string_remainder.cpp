#include<bits/stdc++.h>
using namespace std;

int findRemainder(string numStr){
    int ln = numStr.length();
    int rem = 0;

    for(int i=0; i<ln; i++){
        int num = rem*10 + (numStr[i] - '0');
        rem = num % 11;
    }

    return rem;
}

int main() {

    string numberStr;
    cin >> numberStr;
    
    cout << findRemainder(numberStr);

    return 0;
}