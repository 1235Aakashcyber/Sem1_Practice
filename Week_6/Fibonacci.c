// 0, 1, 1, 2, 3, 5, 8, 13, .....

#include<stdio.h>
int main(){
int n, fib1=0, fib2=1, fib;
printf("Enter the number of terms of fibonacci series you want to print : ");
scanf("%d",&n);

printf("%d\t%d\t",fib1,fib2);

for(int i=3; i<=n; i++){
    fib = fib1 + fib2;
    printf("%d\t", fib);
    fib1 = fib2;
    fib2 = fib;
}
return 0;    
}