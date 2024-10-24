#include<stdio.h>
int main(){
    int r,c;
   printf("Enter the size of matrix (rows) :");
   scanf("%d",&r);
   printf("Enter the size of matrix (columns) :");
   scanf("%d",&c);
int A[r][c], B[r][c], C[r][c];
printf("For Matrix A \n");
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("Enter the element A[%d][%d] of matrix : ",i,j);
        scanf("%d",&A[i][j]);
    }
}
printf("For Matrix B \n");
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("Enter the element B[%d][%d] of matrix : ",i,j);
        scanf("%d",&B[i][j]);
    }
}
for(int k=0; k<r; k++){
    for(int m=0; m<c; m++){
        C[k][m] = A[k][m] + B[k][m];
        printf("%d \t",C[k][m]);
    }
    printf("\n");
}
return 0;    
}