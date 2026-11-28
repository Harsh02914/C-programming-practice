// using while loop

#include <stdio.h>

    int main() {
    int num, sum = 0;
    while (1){
        printf ("Enter a positive numeber (or negative to stop) ");
        scanf ("%d", &num);

        if (num < 0){
            break;
        }
        sum = sum + num;
    }
    printf ("TOtal sum = %d", sum);
return 0;
}