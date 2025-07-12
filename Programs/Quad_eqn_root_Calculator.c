#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,D,x1,x2;
printf("Enter the quadratic equation parameters (a,b,c) of [ax^2 + bx + c = 0]: \n");
printf("a = ");
scanf("%f",&a);
printf("b = ");
scanf("%f",&b);
printf("c = ");
scanf("%f",&c);
D = (b*b)-(4*a*c);
if(D<0){
    printf("No real roots");
    return 0;
}
x1 = ((-b)+pow(D,0.5))/(2*a);
x2 = ((-b)-pow(D,0.5))/(2*a);
printf("Root 1: %0.2f\n",x1);
printf("Root 2: %0.2f",x2);
return 0;
}