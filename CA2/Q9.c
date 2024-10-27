#include<stdio.h>
int main(){
int n,fact=1;
float sum = 0.0;
printf("Enter the terms upto which you want to add : ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    fact = fact*i;
    sum = sum + 1/fact;
}
printf("Sum is %f",sum);
return 0;    
}