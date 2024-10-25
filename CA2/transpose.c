#include<stdio.h>
int main(){
int r,c,temp;
printf("Enter No. of rows : ");
scanf("%d",&r);
printf("Enter No. of columns : ");
scanf("%d",&c);
int A[r][c];
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("Enter Element A[%d][%d] : ");
        scanf("%d",&A[i][j]);
    }
printf("\n");
}
printf("Matrix is \n");

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d",A[i][j]);
}
}
printf("\n");
printf("Transpose is \n");
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        temp = A[i][j];
        A[i][j] = A[j][i];
        A[j][i] = temp;
        printf("%d",A[i][j]);
    }
}
return 0;    
}