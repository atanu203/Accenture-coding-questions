#include<bits/stdc++.h>
using namespace std;

int oddIdxSum(vector<int> Arr){
    int oddSum = 0;
    for(int i=0; i<Arr.size(); i++){
        if(i%2 != 0) oddSum += Arr[i];
    }
    return oddSum;
}

int evenIdxSum(vector<int> Arr){
    int evenSum = 0;
    for(int i=0; i<Arr.size(); i++){
        if(i%2 == 0) evenSum += Arr[i];
    }
    return evenSum;
}

int diceAndNums(int dice, vector<int> Arr) {
    int Sum;
    if(dice % 2 == 0){
        Sum = oddIdxSum(Arr);
    }
    else{
        Sum = evenIdxSum(Arr);
    }
    return Sum;
}

int main() {
    int Dice, N;
    cin >> Dice;
    cin >> N;
    vector<int> nums(N);
    for(int i=0; i<N; i++){
        cin >> nums[i];
    }

    cout << diceAndNums(Dice, nums);

    return 0;
}