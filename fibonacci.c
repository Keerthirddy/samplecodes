#include <stdio.h>

void printFibonacci(int x) {
    int a = 0, b = 1, next;

    for (int i = 1; i <= x; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int x;
    printf("Enter the number of terms: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printFibonacci(x);
    }

    return 0;
}
