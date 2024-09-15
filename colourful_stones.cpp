#include<bits/stdc++.h>
using namespace std;

int findStandingPosition(string stone, string inst) {
    int idx = 0;
    for(int i=0; i<inst.length(); i++){
        if(inst[i] == stone[idx]){
            idx++;
        }
    }
    return (idx + 1);
}

int main() {
    string stones, instr;
    cin >> stones;
    cin >> instr;

    cout << findStandingPosition(stones, instr);

    return 0;
}