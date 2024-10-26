#include<stdio.h>
int main(){
int Row,Col;
printf("Enter No of rows :");
        scanf("%d",&Row);
printf("Enter No of Col :");
        scanf("%d",&Col);
int A[Row][Col],B[Col][Row];

for(int i=0; i<Col; i++){
    for(int j=0; j<Row; j++){
        B[i][j] = 0;
    }
}

for(int i=0; i<Row; i++){
    for(int j=0; j<Col; j++){
        printf("Enter Element A[%d][%d] : ",i,j);
        scanf("%d",&A[i][j]);
    }
}

printf("________________________________________________________________\n Real Matrix is\n");
for(int i=0; i<Row; i++){
    for(int j=0; j<Col; j++){
        printf("%d \t",A[i][j]);
    }
    printf(" \n");
}

for(int i=0; i<Row; i++){
    for(int j=0; j<Col; j++){
       B[j][i] = A[i][j]; 
       
    }
}

printf("________________________________________________________________\n Transpose Matrix is\n");
for(int i=0; i<Col; i++){
    for(int j=0; j<Row; j++){
        printf("%d \t",B[i][j]);
    }
    printf(" \n");
}
return 0;    
}
