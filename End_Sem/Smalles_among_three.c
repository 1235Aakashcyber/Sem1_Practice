#include<stdio.h>
int main(){
int a,b,c;
printf("Enter num1 :");
scanf("%d",&a);
printf("Enter num2 : ");
scanf("%d",&b);
printf("Enter num3 : ");
scanf("%d",&c);
if(a>b){
    if(a>c){
        printf("Largest is num1 = %d",a);
    }
    else{
        printf("Largest is num3 = %d",c);
    }
}
else{
    if(b>c){
        printf("Largest is num2 = %d",b);
    }
    else{
        printf("Largest is num3 = %d",c);
    }
}
return 0;
}