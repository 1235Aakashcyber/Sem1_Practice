#include<stdio.h>
int main(){
int n,temp;
printf("Enter the size of array : ");
scanf("%d",&n);
int A[n];
for(int i=0; i<n; i++){
    printf("Enter the elemet %d : ",i+1);
    scanf("%d",&A[i]);
}
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(A[j+1]<A[j]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
        }
    }
}
for(int i=0; i<n; i++){
    printf("%d \t",A[i]);
}
return 0;    
}