// To check a number is even or odd
// Even --> 0
// 0dd --> 1
#include <stdio.h>
int main() {
    int x;
    printf("Enter the Number : ");
    scanf("%d", &x);

    printf("%d", !(x%2 == 0) );
    return 0;

}