#include<bits/stdc++.h>
using namespace std;

int SWGgame(int n, string str){
    string A = "", B = "";
    string word = "";
    bool flag = 0;

    for(int i=0; i<str.length(); i++){
        word += str[i];
        if(word == "snake"){
            if(flag) B += "s";
            else A += "s";

            flag = !flag;
            word = "";
        }
        else if(word == "water"){
            if(flag) B += "w";
            else A += "w";

            flag = !flag;
            word = "";
        }
        else if(word == "gun"){
            if(flag) B += "g";
            else A += "g";

            flag = !flag;
            word = "";
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(B[i] == 's' && A[i] == 'g' || B[i] == 'w' && A[i] == 's' || B[i] == 'g' && A[i] == 'w'){
            count++;
        }
    }
    return count;
}

int main() {

    int N;
    cin >> N;
    string moves;
    cin >> moves;

    cout << SWGgame(N, moves);

    return 0;
}