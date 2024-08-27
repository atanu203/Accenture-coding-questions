#include<bits/stdc++.h>
using namespace std;

int main() {

    string code;
    cin >> code;
    int ln = code.length();
    string result = "";
    int count = 0;

    for(int i=0; i<ln; i++){
        if(code[i] == '1'){
            count++;
        }
        else{
            result += 'A' + count - 1;
            count = 0;
        }
    }
    result += 'A' + count - 1;

    cout << result;

    return 0;
}