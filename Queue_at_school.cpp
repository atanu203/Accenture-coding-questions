#include<bits/stdc++.h>
using namespace std;

int main() {
    string students;
    cin >> students;
    int ln = students.length();
    int times;
    cin >> times;

    while(times > 0){
        for(int i=0; i<ln-1; i++){
            if(students[i] == 'B' && students[i+1] == 'G'){
                swap(students[i], students[i+1]);
                i++;
            }
        }
        times--;
    }

    cout << students;

    return 0;
}