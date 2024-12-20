#include<stdio.h>
int main(){
int A[3][3], B[3][3];
int sum =0;
printf("For matrix A\n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("Enter A[%d][%d]: ",i,j);
        scanf("%d",&A[i][j]);
    }
}
printf("For matrix B\n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("Enter B[%d][%d]: ",i,j);
        scanf("%d",&B[i][j]);
    }
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        for(int k=0; k<3; k++){
    sum = sum + A[i][k]*B[k][j];
    }
    printf("%d \t",sum);
    sum = 0;
    }
    printf("\n");
}

return 0;
}