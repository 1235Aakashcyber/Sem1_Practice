#include<stdio.h>
int main(){
int num,mul=1;
printf("Enter the number of whose table you want to print");
scanf("%d", &num);
for(int i=1; i<=10; i++){
    mul = num * i;
    printf("%d X %d = %d \n",num,i,mul);
}
return 0;    
}