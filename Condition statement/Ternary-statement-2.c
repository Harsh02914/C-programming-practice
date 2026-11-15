// check leap year

#include <stdio.h>

int main()
{
    int y, year;
    printf("Enter year ");
    scanf("%d", &y);

    ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? printf(" %d is leap year ", y) : printf("%d is not a leap year ", y);

    return 0;
}