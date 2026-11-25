// Sum of even numbers

#include <stdio.h>

    int main() {
    int n, i, sum;

    printf ("Enter number ");
    scanf ("%d", &n);

    for (i = 2; i <= n; i += 2){
        sum = sum + i;
    }
    printf ("Sum = %d", sum);
return 0;
}