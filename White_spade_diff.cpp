#include<bits/stdc++.h>
using namespace std;

string whiteSpaces(string A, string B) {
    int count1 = 0, count2 = 0;
    for(int i=0; i<A.length(); i++){
        if(A[i] == ' ') count1++;
    }
    for(int j=0; j<B.length(); j++){
        if(B[j] == ' ') count2++;
    }
    int spcDiff = abs(count1 - count2);
    if(spcDiff % 2 == 0) return "Even";
    else return "False";
}

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    cout << whiteSpaces(str1, str2);

    return 0;
}