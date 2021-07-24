#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3

int is_diag_dom(int mat[][N]){
    int rowSum, is_dom = 1;
    for(int i=0;i<N;i++){
        rowSum=0;
        for(int j=0;j<N;j++){
            rowSum+=fabs(mat[i][j]);
        }
        rowSum-=fabs(mat[i][i]);
        if(fabs(mat[i][i]) < rowSum){
            is_dom = 0;
        }
    }
    return is_dom;
}
int main() {
    int matrix[][3] = {{100,2,3},{4,100,6},{7,8,100}};
    if(is_diag_dom(matrix)==1){
        printf("The matrix is diagonally dominant");
    }
    else{
        printf("THe matrix isn't diagonally dominant");
    }
    return 0;
}
