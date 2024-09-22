#include<bits/stdc++.h>
using namespace std;

bool isNotVowel(char ch){
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return false;
    }
    else return true;
}

int factorial(int num) {
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}

int maxPermutation(vector<string> Arr) {
    int N = Arr.size();
    int maxCount = 0;
    for(int i=0; i<N; i++){
        int cons = 0;
        string temp = Arr[i];
        for(int j=0; i=j<temp.length(); j++){
            if(isNotVowel(temp[j])) cons++;
        }
        int fact = factorial(cons);
        maxCount = max(maxCount, fact);
    }
    return maxCount;
}

int main() {
    vector<string> words = {"Hello", "ccbc", "aaciou"};

    cout << maxPermutation(words);

    return 0;
}