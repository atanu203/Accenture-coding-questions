#include<bits/stdc++.h>
using namespace std;

int main() {

    int D;
    cin >> D;

    float area = 3.14 * D * D;

    if(area - int(area) <= 0.5){
        cout << int(area);
    }
    else{
        cout << int(area) + 1;
    }

    return 0;
}