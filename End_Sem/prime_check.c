#include<stdio.h>
void primechk(int num);
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
primechk(num);
return 0;
}
void primechk(int num){
    int count=0;
    for(int i=2; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==1){
        printf("The number is a prime number");
    }
    else{
        printf("The number is a composite number");
    }
}