//1.

#include<stdio.h>
void main(){
for(int i=1; i<=5;i++){
    char c='A';
    for(int j=1; j<=i;j++){
     printf("%c",c);
           c++;
    }
    printf("\n");
}
}


//2.

/* #include<stdio.h>
void main(){
for(int i=1; i<=5;i++){
    for(int j=1; j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
}
} */