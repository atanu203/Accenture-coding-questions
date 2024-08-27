#include<bits/stdc++.h>
using namespace std;

int neraestInteger(int num, int m) {
    int rem = num % m;
    if(rem < (m+1)/2){
        return (num - rem);
    }
    else{
        return (num + (m - rem));
    }
}

int main() {

    int num, m;
    cin >> num >> m;

    int nerInt = neraestInteger(num, m);

    cout << nerInt;

    return 0;
}