#include<stdio.h>
int main(){
int n,a,b;
printf("Enter num1:");
scanf("%d",&a);
printf("Enter num2:");
scanf("%d",&b);
printf("Enter the operation you want to perform\n");
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
scanf("%d",&n);
switch (n)
{
case 1:
    printf("Sum is : %d",a+b);
    break;
case 2:
    printf("Difference is : %d",a-b);
    break;
case 3:
    printf("Multiplication is : %d",a*b);
    break;
case 4:
    printf("Division is : %0.2f",((float)a)/((float)b));
    break;
default:
    printf("Invalid input");
    break;
}

return 0;
}