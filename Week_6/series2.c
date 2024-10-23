#include<stdio.h>
#include<conio.h>
int main(){
int a=2,b=3,n,sign =-1;
float temp,sum = 1+2.0/3.0; 
clrscr();

printf("This program calculates the sum of series 1 + 2/3 - 3/4 + 4/5 - 5/6 + .... \n");
printf("Enter the number of terms upto which you want to add : ");
scanf("%d",&n);

for(int i=1; i<=(n-2); i++){
        temp = sign*((2.0+i)/(3.0+i));
        sum = sum + temp;
        sign = -sign;
}

printf("%f",sum);
getch();
return 0;    
}