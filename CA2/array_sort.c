// To arrange an array in ascending order.

#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int A[size];

    for(int i=0; i<size; i++){
        printf("Enter element %d : ",i);
        scanf("%d",&A[i]);
    }
    int max=A[0];
    for(int j=1; j<size; j++){
        if(max<A[j]){
            max = A[j];
        }
        else {
            continue;
        }
    }
    printf("%d",max);
    return 0;
}