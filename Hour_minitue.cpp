#include<bits/stdc++.h>
using namespace std;

pair<int, int> convert12HrForm(int hr, int min) {
    pair<int, int> ans;
    if(hr >= 12){
        hr = hr - 12;
    }
    ans.first = hr;
    ans.second = min;

    return ans;
}

int main() {
    int Hour, Minitue;
    cin >> Hour >> Minitue;

    pair<int, int> result = convert12HrForm(Hour, Minitue);
    cout << result.first << " " << result.second;

    return 0;
}