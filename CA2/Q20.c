#include<stdio.h>
int main(){
int r,c;
printf("Enter the no. of rows : ");
scanf("%d",&r);
printf("Enter the no. of columns : ");
scanf("%d",&c);
int A[r][c], B[c][r];
for(int i=0; i<r; i++){
    for(int j =0; j<c; j++){
        printf("Enter element A[%d][%d] : ",i,j);
        scanf("%d",&A[i][j]);
    }
}
for(int i=0; i<r; i++){
    for(int j =0; j<c; j++){
        B[j][i] = A[i][j];
    }
}
printf("\n Real matrix is \n");
for(int i=0; i<r; i++){
    for(int j =0; j<c; j++){
        printf("%d \t",A[i][j]);
    }
    printf("\n");
}
printf("\n Transpose matrix is \n");
for(int i=0; i<c; i++){
    for(int j =0; j<r; j++){
        printf("%d \t",B[i][j]);
    }
    printf("\n");
}
return 0;    
}