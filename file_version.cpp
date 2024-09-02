#include<bits/stdc++.h>
using namespace std;

int fileVersion(string fileV[], int n) {
    int fileVer = -1;
    for(int i=0; i<n; i++){
        string str = fileV[i];
        if(str.length() >= 6 && str.substr(0, 5) == "File_"){
            int idx = 5, ver = 0;
            bool valid = 1;
            while(idx < str.length()){
                if(str[idx] <= 57 && str[idx] >= 48){
                    ver = (ver * 10) + (str[idx] - 48); 
                }
                else{
                    valid = 0;
                    break;
                }
                idx++;
            }
            if(valid) fileVer = max(fileVer, ver);
        }
    }
    return fileVer;
}

int main() {
    int size;
    cin >> size;
    string validVer[size];
    for(int i=0; i<size; i++){
        cin >> validVer[i];
    }

    cout << fileVersion(validVer, size);

    return 0;
}