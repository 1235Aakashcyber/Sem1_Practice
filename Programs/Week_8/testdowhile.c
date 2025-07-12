#include<stdio.h>
int main(){
char a;
A:
printf("enter the value");
scanf("%c",&a);

if(a=='y'){a='n';goto A;}else{goto B;}
B:
return 0;
}