#include<stdio.h>
void PrintString(char arr[]);
int main(){
    char FirstName[] = "Aakash";
    char LastName[] = "Goswami";

    PrintString(FirstName);
    printf(" ");
    PrintString(LastName);    
}

void PrintString(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
}