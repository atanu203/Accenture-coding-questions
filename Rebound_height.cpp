#include<bits/stdc++.h>
using namespace std;

float reboundHeight(int H, int V_i, int V_f) {
    /*
    H = initital height
    V_i = initital velocity
    V_f = final velocity
    */
    int H_r; // rebound height
    // H_r = H * e^2n
    // e^n = V_i/V_f
    // So, H_r = H * (e^n)^2 => H_r = H * (V_i/V_f)^2
    H_r = H * pow((V_i/V_f), 2);

    return H_r;
}

int main() {
    int H, V_i, V_f;
    cin >> H >> V_i >> V_f;

    cout << reboundHeight(H, V_i, V_f);

    return 0;
}