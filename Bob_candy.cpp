#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Money;
    cin >> N;
    vector<int> Prices(N);
    for(int i=0; i<N; i++){
        cin >> Prices[i];
    }
    cin >> Money;

    sort(Prices.begin(), Prices.end());
    int count = 0;

    for(int i=1; i<=N; i++){
        if(Prices[i-1]%5 == 0){
            count++;
        }
        else if(Prices[i-1] >= Money){
            count++;
            Money = Money - Prices[i-1];
        }
    }

    cout << count;

    return 0;
}