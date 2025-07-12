void print(char *A);
#include<stdio.h>
#include<string.h>
int main(){
char A[5][20]={"Mumbai", "Delhi", "Calcutta", "Chennai", "Banglore"};
char temp[20];
for(int i=0; i<5; i++){
    for(int j=0; j<5-i-1; j++){
        if(strcmp(A[j],A[j+1])>0){
        strcpy(temp,A[j]);
        strcpy(A[j],A[j+1]);
        strcpy(A[j+1],temp);
        }
    }
}
for(int i=0;i<5; i++){
        printf("%s ",A[i]);
    }

return 0;
}