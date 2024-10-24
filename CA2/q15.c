#include<stdio.h>
int main(){
    int k,n;
    printf("Enter size of array : ");   
    scanf("%d",&n);
    int A[n];
    for(int i=1; i<=n; i++){
        printf("Enter element %d : ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter number of element you want to search : ");
    scanf("%d",&k);
            printf("%d",A[k]);
    
return 0;
}