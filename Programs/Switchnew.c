/*  WAP to find
    (i) square root
    (ii) square
    (iii) cube
    (iv) prime check
    (v) factorial
    (vi) prime factors of a number*/

#include <stdio.h>
#include <math.h>
int main (){
int num;
int tem;
int temp,count;
float sqr,sq,cube,prime,pf,fact;
int task;

printf("Enter the number : ");
scanf("%d",&num);

printf("Enter the task number you want to perform \n (1) square root \n (2) square \n (3) cube \n (4) prime check \n (5) factorial \n (6) prime factors of a number \n");
printf("\n Enter Input here : ");
scanf("%d",&task);

switch(task){
    case 1:
    sqr = pow(num,0.5);
    printf("%.3f",sqr);
    break;

    case 2:
    sq = pow(num,2);
    printf("%.3f",sq);
    break;

    case 3:
    cube = pow(num,3);
    printf("%.3f",cube);
    break;

    case 4:
    for(int i =2; i<=num/2; i++){
        temp = num%i;
        if(temp == 0){
            count++;
        }
    }
    if(count != 0){
        printf("The given number is an prime number");
    }
    else {
        printf("The given number is not an prime number");
    }
    break;

    case 5:
    fact =1;
    for(int i = 1; i<=num; i++){
        fact = fact * i;
    }
    printf("Factorial of the given number is %.1f",fact);
    break;

    case 6:
    for(int i=2;i<=num;i++){
        while(num%i==0){
        printf("%d \t",i);
        num/=i;
        }
    }
    break;

    default:
        printf("Enter a valid input !!");
}
return 0;
}