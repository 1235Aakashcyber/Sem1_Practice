#include<stdio.h>
int main() {
    //This program is to find the perimeter of the rectrangle.
    int sideA, sideB;
    printf("enter sideA : ");
    scanf("%d", &sideA);

    printf("enter sideB : ");
    scanf("%d", &sideB);

    int perimeter = 2*sideA + 2*sideB;
    printf("Perimeter comes out to be = %d", perimeter);
    return 0;
}