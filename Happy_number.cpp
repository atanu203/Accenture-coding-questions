#include<bits/stdc++.h>
using namespace std;

bool happyNumber(int num) {
    unordered_set<int> st;

    if(num == 1) return true;

    if(st.find(num) != st.end()) return false;
    st.insert(num);

    int newNum = 0;
    while(num > 0){
        int ld = num % 10;
        newNum += (ld * ld);
        num /= 10;
    }

    return happyNumber(newNum);
}

int main() {
    int N;
    cin >> N;

    cout << happyNumber(N);

    return 0;
}