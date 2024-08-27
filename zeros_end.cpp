/*
    Given an array of random numbers, Push all the zero’s of a given an 
    array to the end of the array. All non-zero elements should come in front and 
    Order of all non-zero elements should be same. 
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> zeroEnd(vector<int> arr, int n) {
    int count = 0;
    int i = 0, j = 0;

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            i++;
            j++;
        }
        else{
            count++;
        }
    }

    for(int i=j; i<n; j++){
        arr[i] = 0;
    }

    return arr;
}

int main() {

    vector<int> input = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = 8;

    vector<int> output = zeroEnd(input, n);

    cout << output;

    return 0;
}