#include<stdio.h>
int main(){
int year;
printf("Enter the year :");
scanf("%d",&year);
year%4==0?printf("Year is a leap year"):printf("Year is not a leap year");
return 0;
}