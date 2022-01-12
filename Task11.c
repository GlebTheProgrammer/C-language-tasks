/**
 * 11.Перевести из десятичной сс в nую
 */

#include <stdio.h>

int main() {
    int N, radix;

    printf("Enter Number: ");
    scanf("%d", &N);
    fflush(stdin);
    printf("\n");

    //Numeral base
    printf("Enter Radix: ");
    scanf("%d", &radix);
    fflush(stdin);
    printf("\n");

    if (radix < 1 ) {
        printf("Wrong radix");
        return -1;
    }

    int power = 1;
    int num = 0;
    int digit = N;
    printf("%d \n", radix);
    while (N > 0) {
        digit = N % radix;
        N /= radix;
        printf("%d \n", N);
        if (digit >= radix) {
            printf("Invalid Number");
            return -1;
        }

        num += digit * power;
        power = power * 10;
    }

    printf("Number: %d", num);
    return 0;
}