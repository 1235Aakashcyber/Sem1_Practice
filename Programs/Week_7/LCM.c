// LCM CALCULATOR.
#include<stdio.h>
int main(){
int a,b,lcm,gcd;
scanf("%d",&a);
scanf("%d",&b);
int min; 
if(a<b){
    min =a;
}
else{
    min = b;
}
printf("%d \n",min);
for(int i=1; i<= min; i++){
if(a%i == 0 && b%i == 0){
    gcd = i;
}
}
printf("LCM = %d & GCD = %d",(a*b)/gcd,gcd);
return 0;
}