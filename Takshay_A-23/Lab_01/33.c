#include <stdio.h>

int main() {
    int n, i, num;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter %d numbers:\n", n);

    scanf("%d", &num);
    max = min = num;

    for (i = 1; i < n; i++) {
        scanf("%d", &num);

        if (num > max)
            max = num;

        if (num < min)
            min = num;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
