// Calculation of factorial.

#include <stdio.h>
int main() {
    int f;
    int A=1;
    printf ("Enter the number whose factorial is desired : ");
    scanf("%d",&f);
    for (int i=1;f>1;f--)
    {
      printf("%d x ", f); 
    A= A*f;
    
    }
 printf("1");
    printf (" = %d",A);

    return 0;
}