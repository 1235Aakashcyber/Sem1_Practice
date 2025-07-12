// x + x^2 + x^3 + x^4 + .......

#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    float sum= 0;
    printf("This program calculates the sum of series x + x^2 + x^3 + x^4 + ..... so, \n");
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter the number of terms you want to add : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        sum = sum + pow(x,i);
    }
    printf("Sum of the series is : %.1f",sum);
    
return 0;
}