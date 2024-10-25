// This program arrange the input numbers in ascending order.

#include<stdio.h>
int main(){
    int size,temp;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int A[size];

    for(int i=0; i<size; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&A[i]);
    }

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size; j++){
        if(A[j+1]<A[j]){
            temp = A[j+1];
            A[j+1] = A[j];
            A[j] = temp;
        }
        }
    }

    for(int i=0; i<size; i++){
    printf("%d \t",A[i]);
    }
    return 0;
}
