#include<bits/stdc++.h>
using namespace std;

int main() {

    string tossSet;
    cin >> tossSet;
    int ln = tossSet.length();

    int score = 0;
    int countH = 0;

    for(int i=0; i<ln; i++){
        if(tossSet[i] == 'H'){
            score += 2;
            countH++;
        }
        else{
            score -= 1;
            countH = 0;
        }
        if(countH == 3){
            break;
        }
    }

    cout << score;

    return 0;
}