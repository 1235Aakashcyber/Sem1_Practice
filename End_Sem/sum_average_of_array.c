#include<stdio.h>
int main(){
int A[5],sum=0;
for(int i=0; i<5; i++){
    printf("Enter elemrnt %d : ",i+1);
    scanf("%d",&A[i]);
}
for(int i=0; i<5; i++){
sum = sum + A[i];
}
float average = (float)sum/5.0;
printf("Sum is : %d\n",sum);
printf("Average is : %0.2f",average);

return 0;
}