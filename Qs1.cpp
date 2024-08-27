/*
The function def differenceofSum(n. m) accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

Assumption:
n>0 and m>0
Sum lies between integral range

Example:
Input
n:4
m:20
Output
90

Explanation:
Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60
Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
Difference 150 – 60 = 90
*/

#include<bits/stdc++.h>
using namespace std;

int differenceofSum(int n, int m) {
    int sumdivby4 = 0;
    int sumNotdivby4 = 0;
    for(int i=1; i<=m; i++){
        if(i%4 == 0) sumdivby4 += i;
        else sumNotdivby4 += i;
    }
    int diffofSum = sumNotdivby4 - sumdivby4;
    return diffofSum;
}

int main() {
    int n, m;
    cin >> n >> m;

    int ans = differenceofSum(n, m);

    cout << ans;

    return 0;
}