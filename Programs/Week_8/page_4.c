// This program returns the maximum or the minimum number from the given list of numbers.
#include<stdio.h>
#include<string.h>
int main(){
    int count=0,A[20];
    int mx,mi,temp,n,m;
    char c,S1[5];
    printf("Enter the numbers (when completed enter '0')\n");
    for(int i=0; A[i-1]!=0; i++){
        printf("Enter num%d : ",i+1);
        scanf("%d",&A[i]);
        count++;
    }
printf("Enter what you want to find (max/min) : ");
scanf("%s",S1);
n=strcmp(S1,"max");
m=strcmp(S1,"min");
if(n==0){
    int max=A[0];
    for(int i=0; i<count; i++){
        if(max<A[i]){
            temp = A[i];
            A[i] = max;
            max = temp;
        }
    }
    printf("Maximum among the given numbers is %d",max);
}
if(m==0){
    int min=A[0];
    for(int i=0; i<count-1; i++){
        if(min>A[i]){
            temp = A[i];
            A[i] = min; 
            min = temp;
        }
    }
    printf("Minimum among the given numbers is %d",min);
}
if(n!=0 && m!= 0){printf("Invalid Input");}
return 0;
}