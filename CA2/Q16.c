#include<stdio.h>
int main(){
int r,c;
printf("Enter number of rows : ");
scanf("%d",&r);
printf("Enter number of column : ");
scanf("%d",&c);
int A[r][c], B[r][c], C[r][c];
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("Enter A[%d][%d] : ",i,j);
        scanf("%d",&A[i][j]);
    }
}
printf("\n");
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("Enter B[%d][%d] : ",i,j);
        scanf("%d",&B[i][j]);
    }
}
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        C[i][j] = A[i][j] + B[i][j];
    }
}
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d \t",C[i][j]);
    }
    printf("\n");
}
return 0;    
}