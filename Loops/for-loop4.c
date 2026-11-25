// factorial number

#include <stdio.h>

    int main() {
    int i, n;
    long long factorial = 1;
    printf ("Enter number ");
    scanf ("%d", &n);

    for (i=1; i<=n; i++){
        factorial = factorial * i;
    }
    printf ("Factorial = %lld", factorial);
return 0;
}