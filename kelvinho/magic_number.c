#include <stdio.h>

int isMagicNumber(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return (sum == 1);
}

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        if (isMagicNumber(num)) {
            printf("%d is a magic number.\n", num);
        } else {
            printf("%d is not a magic number.\n", num);
        }
    } else {
        printf("Please enter a valid 3-digit number.\n");
    }

    return 0;
}
