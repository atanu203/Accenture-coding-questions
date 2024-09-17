#include<bits/stdc++.h>
using namespace std;

int main() {
    int cap, N;
    cout << "Capacity of ship: ";
    cin >> cap;
    cout << "Peoples: ";
    cin >> N;

    int rounds = N/cap;
    if(N % cap > 0) cout << (rounds+1);
    else cout << rounds;

    return 0;
}