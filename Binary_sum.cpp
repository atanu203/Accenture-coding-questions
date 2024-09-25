#include<bits/stdc++.h>
using namespace std;

string binarySum(string a, string b) {
    int i = a.length()-1;
    int j = b.length()-1;
    string ans = "";
    int carry = 0;

    while(i >= 0 || j >= 0 || carry){
        if(i >= 0){
            carry += a[i] - '0';
            i--;
        }
        if(j >= 0){
            carry += b[i] - '0';
            j--;
        }
        ans += ((carry % 2) + '0');
        carry = carry/2;
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << "Binary addition is: " << binarySum(s1, s2);

    return 0;
}