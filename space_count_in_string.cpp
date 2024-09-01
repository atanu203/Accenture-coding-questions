#include<bits/stdc++.h>
using namespace std;

int main() {

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    int count1 = 0;
    int count2 = 0;

    for(int i=0; i<str1.length(); i++){
        if(str1[i] == ' ') count1++;
    }
    for(int i=0; i<str2.length(); i++){
        if(str2[i] == ' ') count2++;
    }

    int spaceDiff = abs(count1 - count2);

    if(spaceDiff % 2 == 0){
        cout << "Even : " << spaceDiff;
    }
    else{
        cout << "Odd : " << spaceDiff;
    }

    return 0;
}