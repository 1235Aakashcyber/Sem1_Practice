#include<stdio.h>
int factorial(int n);
int combination(int a, int b);
int main(){
    int n;
    printf("Enter the number of rows you want to print: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int k=0; k<=(n-i-1); k++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }

return 0;
}

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int combination(int a, int b){
    int result;
    result = (factorial(a)/(factorial(b)*factorial(a-b)));
    return result;
}