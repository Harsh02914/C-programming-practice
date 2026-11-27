// Menu driven program 

#include <stdio.h>

    int main() {
    int choice;
    do {
        printf ("\n1. Hello\n2. Goodbye\n3. Exit\n");
        printf ("Enter choice ");
        scanf ("%d", &choice);

        switch (choice){
            case 1: printf ("Hello\n"); break;
            case 2: printf ("Goodbye\n"); break;
            case 3: printf ("Exiting...\n"); break;
            default: printf ("Invalid choice\n");
        }
    } while (choice != 3);
return 0;
}