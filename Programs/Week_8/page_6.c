// This program helps uo to find an element from the array.

#include<stdio.h>
int main(){
int n,find;
A:
printf("Enter the size of array : ");
scanf("%d",&n);
int A[n];
for(int i=0; i<n; i++){
    printf("Enter element %d : ",i+1);
    scanf("%d",&A[i]);
}
printf("\n Enter the element you want to search : ");
scanf("%d",&find);
for(int i=0; i<n; i++){
    if(find == A[i]){
        printf("The element %d is found at index %d",find,i);
    }
    else {
        printf("No Match found !");
        break;
    }
}
return 0;    
}