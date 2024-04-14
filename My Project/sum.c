#include<stdio.h>
int main()
{
	int number, digit1, digit2, digit3, sum;
	printf("Enter a three-digit number\n");
	scanf("%d", &number);
	digit1 = number/100;
	digit2 = (number/10) % 10;
	digit3 = number % 10;
	sum = digit1 + digit2 + digit3;
	printf("the sum of digits of %d is: %d\n", number, sum);
	return 0;
}
