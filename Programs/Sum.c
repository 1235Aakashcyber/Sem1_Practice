# include <stdio.h>
int main() {
  /*
  int n;
  printf("Enter N : ");
  scanf("%d", &n);

  int sum1 = n * (n+1);
  printf("%d", sum1/2);
  */

int n;
int sum = 0;
printf("Enter number upto which sum is to be calculated : ");
scanf("%d", &n);
for(int i; i <= n; i++) {
sum = sum + i;
}
printf("%d \n", sum);

 return 0;
}