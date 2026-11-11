#include <stdio.h>

    int main() {
    int principal, rate, time, simple_interest;

    printf ("Enter Principal ");
    scanf ("%d", &principal);

    printf ("Enter rate ");
    scanf ("%d", &rate);

    printf ("Enter time ");
    scanf ("%d", &time);

    simple_interest = (principal * rate * time ) / 100;
    printf ("Simple interest is = %d", simple_interest);

return 0;
}