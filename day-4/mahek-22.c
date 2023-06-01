#include<stdio.h>

int main() {
   int x;
   int y;
   int z;
   int sum;
   
   printf("Enter the first value: ");
   scanf("%d", &x);
   
   printf("Enter the second value: ");
   scanf("%d", &y);
   
   printf("Enter the third value: ");
   scanf("%d", &z);
   
   sum = (x*x*x) + (y * y * y) + (z * z * z) + (3 * (x + y) * (y + z) * (z + x));
   
   printf("Sum: %d", sum);
   
   return 0;

}