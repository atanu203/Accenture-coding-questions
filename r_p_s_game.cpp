/*
Two players A and B are playing the game of Rock , Paper and scissors. Player A chooses a move represented by String M and the move can be one of the following :
Rock , paper or scissors where
--> Rock beats scissors
--> Scissor beats paper 
--> Paper beats rock
Your task is to find and return a string value representing the winning move for B.

Input: rock    Output: paper
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    string M;
    cout << "Enter 'Rock' or 'Paper' or 'Scissors': ";
    cin >> M;

    if(M == "Rock") cout << "Paper";
    else if(M == "Paper") cout << "Scissors";
    else if(M == "Scissors") cout << "Rock";
    else cout << "Enter valid input !";

    return 0;
}