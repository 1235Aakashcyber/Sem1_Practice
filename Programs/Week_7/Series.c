// 1 + x + x^2/2 + x^3/3 + ...... + x^n/n

#include<stdio.h>
#include<math.h>
int main(){
float temp,sum=1;
int x,n;
printf("This program calculates sum of series : 1 + x + x^2/2 + x^3/3 + ...... + x^n/n\n\n");
printf("Enter x: ");
scanf("%d",&x);
printf("Enter n: ");
scanf("%d",&n);
for(int i=1; i<=n-1; i++){
    temp = pow(x,i)/i;
    sum += temp;
}
printf("Sum is %0.2f",sum);
return 0;
}