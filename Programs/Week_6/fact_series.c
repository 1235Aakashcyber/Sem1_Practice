#include<stdio.h>
//int fact(int n);
int main(){
    int n,fact=1; 
    float sum= 0.0;
    float rec;
    printf("This program calculate the sum of series 1 + 1/2! + 1/3! + 1/4! + ......\n");
    printf("Enter the number of terms you want to add : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        fact = fact*i;
        rec = (1.0/fact);
        sum = sum + rec;
    }
printf("The sum is %f\n", sum);

return 0;    
}

/*int fact(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}*/