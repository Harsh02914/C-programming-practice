//ticket price calculator

#include <stdio.h>

int main()
{
    int age, price = 500;

    printf("Enter age\n");
    scanf("%d", &age);

    if (age <= 12)
    {
        price = 300;
    }
    if (age >= 60)
    {
        price = 200;
    }
    if (age >= 13 && age <= 59)
    {
        price = 500;
    }
    
    printf ("Final price is = %d", price);
    return 0;
}