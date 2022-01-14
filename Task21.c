/*
 * 21.Определить является ли введённое с клавиатуры число степенью двойки
 */

#include <stdio.h>

int main()
{
    int Number;

    printf("Enter number to check");
    scanf("%d",&Number);
    fflush(stdin);

    if (Number > 0 && (Number & (Number - 1)) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}