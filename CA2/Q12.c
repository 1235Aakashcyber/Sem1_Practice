#include<stdio.h>
int main(){
int n;
printf("Enter the no. of rows you want to print : ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    for(int k=1; k<=n-i; k++){
        printf("\t");
    }
        for(int j=1; j<=(2*i-1); j++){
            printf("* \t");
        }
        printf("\n");
}
return 0;    
}