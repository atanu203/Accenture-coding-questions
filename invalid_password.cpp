// #include<bits/stdc++.h>
// using namespace std;

// bool validPassword(string str) {
//     int ln = str.length();
//     int cap = 0, numeric = 0;

//     if(ln < 4) return false;
//     if(isdigit(str[0])) return false;

//     for(int i=0; i<ln; i++){
//         if(str[i] == ' ' || str[i] == '/') return false;
//         if(isdigit(str[i])) numeric++;
//         if(isupper(str[i])) cap++;
//     }

//     return (cap > 0 && numeric > 0);
// }

// int main() {
//     string password;
//     cin >> password;

//     bool ans = validPassword(password);

//     cout << ans << endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

bool validPassword(string str) {
    int ln = str.length();

    if(ln < 4) return false; //atleast 4 character

    if(str[0] - '0' >= 0 && str[0] - '0' <= 9) return false; //starting character must not be numeric number

    int cap = 0, numeric = 0,a = 0;

    for(int i=1; i<ln; i++){

        if(str[i] == ' ' || str[i] == '/') return false; // not have any space or slash(/)

        if(str[i] - '0' >= 0 && str[i] - '0' <= 9) numeric++; //counting numeric number

        if(str[i] >= 'A' && str[i] <= 'Z') cap++; //counting capital letter
    }

    return (cap > 0 && numeric > 0); // capital letter and numeric number must be greater than 0
}


int main() {

    string password;
    cin >> password;

    bool ans = validPassword(password);

    cout << ans;

    return 0;
}