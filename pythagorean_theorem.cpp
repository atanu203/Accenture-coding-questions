#include<bits/stdc++.h>
using namespace std;

int main() {

    int A, B;
    cin >> A >> B;

    int temp = (A*A) + (B*B);
    float hyp = sqrt(temp);

    cout << ceil(hyp);

    return 0;
}