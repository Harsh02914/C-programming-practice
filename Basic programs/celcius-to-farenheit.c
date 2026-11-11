#include <stdio.h>

int main()
{
    float celsius, farenheit;
    printf("Enter celsius ");
    scanf("%f", &celsius);

    farenheit = (celsius * 9 / 5) + 32;
    printf("Farenheit is = %.2f", farenheit);
    return 0;
}