#include<stdio.h>
int main(){
int r,c;
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
}
for(int i=0; i<c; i++){
    for(int j=0; j<r; j++){
        printf("%d",A[i][j]);
    }
}
return 0;    
}