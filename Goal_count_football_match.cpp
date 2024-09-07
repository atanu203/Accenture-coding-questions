#include<bits/stdc++.h>
using namespace std;

string countGoals(string str) {
    int countA = 0, countB = 0;
    for(int i=4; i<str.length(); i+=5){
        if(str[i] == 'A') countA++;
        else countB++;
    }
    return ((countA > countB) ? "TeamA" : "TeamB");
}

int main() {
    string goalTeam;
    cin >> goalTeam;

    cout << countGoals(goalTeam);

    return 0;
}