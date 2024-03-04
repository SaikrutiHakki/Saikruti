#include<stdio.h>
int main()
{
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);
  temp = first;
  first = second;
  second = temp;
  printf("\nAfter swapping, first number = %f\n", first);
  printf("After swapping, second number = %f", second);
  return 0;
}
