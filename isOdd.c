#include <stdio.h>

int isOdd(int n) {
    return n % 2 != 0;
}

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isOdd(number)) {
        printf("%d is odd.\n", number);
    } else {
        printf("%d is even.\n", number);
    }

    return 0;
}
