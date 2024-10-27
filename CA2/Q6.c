#include<stdio.h>
int main(){
float A,B,C;
printf("Enter the Angle 1 of triangle : ");
scanf("%f",&A);
printf("Enter the Angle 2 of triangle : ");
scanf("%f",&B);
printf("Enter the Angle 3 of triangle : ");
scanf("%f",&C);
if(A+B+C == 180){
    printf("Valid Triangle");
}
else{
    printf("Invalid Triangle");
}
return 0;    
}