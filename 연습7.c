#include <stdio.h>
#include <math.h>

double raiseToPow(int x, double power) {
    double result = 1.0;
    if (power >= 1) {
        for (int i = 1; i <= power; i++) {
            result *= x;
        }
    }
    else {
        for (int i = 1; i <= -power; i++) {
            result /= x;
        }
    }
    if (power > 0 && power < 1) {
        result = exp(power * log(x));
    }
    return result;
}

int main(void) {
    int x;
    double power;
    printf("밑 입력: ");
    scanf("%d", &x);
    printf("지수 입력: ");
    scanf("%lf", &power);
    double result = raiseToPow(x, power);
    printf("%d ^ %.2lf = %.2lf\n", x, power, result);
    return 0;
}