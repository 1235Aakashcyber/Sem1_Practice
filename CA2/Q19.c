#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter the size of array : ");
scanf("%d",&n);
int A[n];
for(int i=0; i<n; i++){
    printf("Enter element %d : ",i);
    scanf("%d",&A[i]);
    sum += A[i];
}
printf("Sum is %d \n",sum);
float avg = sum/n;
printf("Avg is %.3f",avg);
return 0;    
}