// Largest of two numbers

#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Enter a and b ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    printf("Largest = %d", max);
    return 0;
}