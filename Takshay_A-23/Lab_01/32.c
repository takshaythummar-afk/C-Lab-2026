#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, num;
    int max = INT_MIN, secondMax = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax && num != max) {
            secondMax = num;
        }
    }

    
        printf("Maximum = %d\n", max);
        printf("Second Maximum = %d\n", secondMax);
    

    return 0;
}
