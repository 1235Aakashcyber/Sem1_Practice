#include<stdio.h>
int main(){
int a,b,*c;
printf("Enter a = ");
scanf("%d",&a);
printf("Enter b = ");
scanf("%d",&b);
*c = &a;
printf("%d\n",*c);
&a = &b;
&b = *c;
printf("After swaping\n");
printf("a = %d\n",a);
printf("b = %d",b);
return 0;
}