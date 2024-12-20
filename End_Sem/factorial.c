#include<stdio.h>
void factorial(int fact);
int main(){
int fact;
printf("Enter number of which factorial is desired : ");
scanf("%d",&fact);
factorial(fact);
return 0;
}
void factorial(int fact){
    int temp=1;
    for(int i=1; i<=fact; i++){
        temp = temp*i;
    }
    printf("Factorial is %d",temp);
}