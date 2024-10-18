#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    int D = (b*b) - 4*a*c;

    if(D > 0){
        int x1 = (double)(-b + sqrt(D))/(2*a);
        int x2 = (double)(-b - sqrt(D))/(2*a);
        cout << "Roots are" << x1 << "and" << x2;
    }
    else if(D == 0){
        int x = (double)(-b)/(2*a);
        cout << "Root is " << x;
    }
    else if(D < 0){
        cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt(D) / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt(D) / (2 * a);
    }

    return 0;
}