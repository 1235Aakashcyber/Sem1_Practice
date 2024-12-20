#include<stdio.h>
int main(){
int a;
printf("Enter the number : ");
scanf("%d",&a);
if(a==0){
    printf("The given number is equal to zero");
}
else if(a<0){
    printf("The number is a negative number");
}
else if(a>0){
    printf("The number is a positive number");
}
return 0;
}