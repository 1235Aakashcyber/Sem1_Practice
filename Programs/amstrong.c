#include <stdio.h>
#include <math.h>

int main() {
    int num, AmsNum, rem, n = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    AmsNum = num;

    while (AmsNum != 0) {
        AmsNum /= 10;
        n++;
    }

    AmsNum = num;

    while (AmsNum != 0) {
        rem = AmsNum % 10;
        sum += pow(rem, n);
        AmsNum /= 10;
    }


    if (sum == num){
        printf("%d is an Armstrong number.\n", num);
    }
    else {
        printf("%d is not an Armstrong number.\n", num);
    }

return 0;
}