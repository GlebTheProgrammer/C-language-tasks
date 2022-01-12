/**
 * 12. GCD by Euclidian method
 */

#include <stdio.h>

int main() {
    int numberA, numberB;

    printf("Enter first number: \n");
    scanf("%d", &numberA);
    fflush(stdin);

    printf("Enter second number: \n");
    scanf("%d", &numberB);
    fflush(stdin);

    if(numberA < 0 || numberB < 0)
    {
        printf("Numbers can not be less 0");
        return -1;
    }

    while (numberB != 0)
    {
        int bCopy = numberB;
        numberB = numberA % numberB;
        numberA = bCopy;
    }

    printf("GCD: %d", numberA);
    return 0;
}
