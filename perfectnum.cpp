#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num && num > 0) {
        printf("%d is a PERFECT NUMBER\n", num);
    } else {
        printf("%d is NOT a perfect number\n", num);
    }

    return 0;
}

