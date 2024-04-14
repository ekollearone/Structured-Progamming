#include<stdio.h>
int main()
{
int dividend, divisor, quotient, remainder;
printf("Enter dividend\n");
scanf("%d", &dividend);
printf("Enter divisor\n");
scanf("%d", &divisor);
quotient = dividend/divisor;
remainder = dividend -(divisor * quotient);
printf("remainder is:%d\n", remainder);
return 0;
}
