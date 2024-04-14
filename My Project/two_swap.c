#include<stdio.h>
int main()
{
int num1, num2;
printf("please entered num1\n");
scanf("%d", &num1);
printf("please entered num2\n");
scanf("%d", &num2);
num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;
printf("after swapping first number is :%d\n", num1);
printf("after swapping second number is :%d\n", num2);
return 0;
}
