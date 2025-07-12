// Sum of n natural numbers.

#include<stdio.h>
int main(){
int n,sum = 0;
printf("This program does the sum of N ntural numbers from 1 \n As (1 + 2 + 3 + 4 + 5 + .....) \n");
printf("Enter the natural number upto which you want to do sum : ");
scanf("%d",&n);

for(int i=1; i<=n; i++){
    sum += i;
}
printf("Sum of numbers from 1 to %d = %d",n,sum);
return 0;    
}