void print(int *A, int n);
#include<stdio.h>
int main(){
int A[5] = {67,23,12,94,53};
int temp,n=5;
for(int i=0; i<n; i++){
    for(int j=0; j<n-1-i; j++){
        if(A[j]<A[j+1]){
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }
}
print(A,n);
return 0;
}
void print(int *A, int n){
    for(int i=0; i<n; i++){
        printf("%d\t",A[i]);
    }
}