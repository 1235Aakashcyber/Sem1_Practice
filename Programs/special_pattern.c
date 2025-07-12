#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of rows you want to print : ");
    scanf("%d",&n);
    for(int i= 1; i<=n; i++){
        for(int k=0; k<=n-i-1; k++){
            printf("\t");
        }
        for(int j = 1; j<=i; j++){
            printf("%d \t", j);
            }
            printf("\n");
}
return 0;
}