#include<bits/stdc++.h>
using namespace std;

const int N = 5;

int minMoves(int matrix[N][N]){
    // center of the matrix
    int cI = N/2, cJ = N/2;
    // position of the 1
    int oneI = 0, oneJ = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(matrix[i][j] == 1){
                oneI = i;
                oneJ = j;
                break;
            }
        }
    }
    int disX = abs(cI - oneI);
    int disY = abs(cJ - oneJ);

    return (disX + disY);
}

int main() {
    int mat[N][N] = { { 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0 },
                      { 0, 0, 1, 0, 0 } };

    cout << minMoves(mat);                  

    return 0;
}