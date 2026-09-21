#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10) {   
        sum = 0;

        while (n > 0) {
            sum += n % 10;
            n = n/ 10;
        }

        n = sum;
    }

    printf("Single digit answer = %d\n", n);

    return 0;
}
