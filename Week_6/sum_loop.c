#include<stdio.h>
int main(){
int n, sum =0;
for(int i=1; i>0; i++){
    printf("Enter a number :");
    scanf("%d",&n);
    if(n==0){break;}
    sum +=n;
    
}
printf("sum is %d",sum);
return 0;    
}