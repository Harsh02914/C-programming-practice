// Sum of numbers 1 to n

#include <stdio.h>

    int main() {
    int n, i, sum;

    printf ("Enter number ");
    scanf ("%d", &n);

    for (i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf ("Sum = %d", sum);
return 0;
}