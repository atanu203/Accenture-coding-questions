#include<bits/stdc++.h>
using namespace std;

int breakInteger(int num) {
    if(num <= 3) return num - 1;

    int quotient = num / 3;
    int remainder = num % 3;

    if(remainder == 0){
        return pow(3, quotient);
    }
    else if(remainder == 1){
        return pow(3, quotient - 1) * 4;
    }
    
    return pow(3, quotient) * 2;
}

int main() {
    int N;
    cin >> N;

    cout << breakInteger(N);

    return 0;
}