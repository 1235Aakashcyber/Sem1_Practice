#include<stdio.h>
int main(){
int n;
printf("Enter size of array");
scanf("%d",&n);
int A[n];
for(int i=0; i<n; i++){
    printf("Enter element %d of Array : ",i+1);
    scanf("%d",&A[i]);
}
int s;
printf("Enter the element you want to search : ");
scanf("%d",&s);
for(int i=0; i<n; i++){
    if(A[i] == s){
        printf("The number %d is at index %d ",s,i);
    }
}
return 0;    
}