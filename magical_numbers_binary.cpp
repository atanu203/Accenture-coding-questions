#include<bits/stdc++.h>
using namespace std;

int countMagicalNum(int N) {
    int count = 0;
    
    // Loop through all numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        int num = i; // Preserve the original number
        int binSum = 0;

        // Calculate the binary sum according to your rule
        while (num > 0) {
            int lBinDig = num % 2;
            if (lBinDig == 0) binSum += 1;
            if (lBinDig == 1) binSum += 2;
            num = num / 2;
        }

        // If the binary sum is odd, increment the count
        if (binSum % 2 != 0) count++;
    }

    return count;
}

int main() {

    int range;
    cin >> range;

    cout << countMagicalNum(range);

    return 0;
}