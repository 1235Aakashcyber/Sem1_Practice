#include<stdio.h>
int main(){
int num,rem,rev=0;
printf("Enter the number : ");
scanf("%d",&num);
for(int i=1; num>0; i++){
    rev = num%10;
    num = num/10;
    printf("%d",rev);
    
}
}

/* #include <stdio.h>
#include <conio.h>
void main() {
int num;
int rev = 0, rem;
printf("Enter a number:\n");
scanf("%d",&num);
while (num != 0) //repeat till number becomes 0
{
rem=num%10; //separates digits from number
rev = rev*10 + rem; //calculate reverse of number
num=num/10; //number gets updated
} // end of while

printf("\nThe reverse of number is %d.",rev);
getch();
} */