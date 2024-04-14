#include <stdio.h>

double power(double x, int y) {
    if (y < 0) {
        return -1;
    }
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double x;
    int y;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    double result = power(x, y);
    if (result == -1) {
        printf("Invalid input: y should be greater than or equal to 0.\n");
    } else {
        printf("%.2lf raised to the power of %d is %.2lf\n", x, y, result);
    }

    return 0;
}
