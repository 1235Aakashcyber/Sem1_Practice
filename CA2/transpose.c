#include<stdio.h>
int main(){
int temp;
int A[3][3];
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("Enter Element A[%d][%d] : ",i,j);
        scanf("%d",&A[i][j]);
    }
}
printf("________________________________________________________________\n Real Matrix is\n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d \t",A[i][j]);
    }
    printf(" \n");
}

for(int i=0; i<3; i++){
    for(int j=0; j<i; j++){
       temp = A[i][j];
       A[i][j] = A[j][i]; 
       A[j][i] = temp; 
    }
}
printf("________________________________________________________________\n Transpose Matrix is\n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d \t",A[i][j]);
    }
    printf(" \n");
}
return 0;    
}
