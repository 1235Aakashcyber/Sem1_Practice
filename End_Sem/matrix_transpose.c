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
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    B[i][j] = A[j][i];
}
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
    printf("%d\t",B[i][j]);
}
printf("\n");
}
return 0;
}