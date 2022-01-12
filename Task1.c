#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 *
 * 1.Найти в строке, содержащей слова и числа, разделенные пробелами, количество вхождений числа N.
 * @return
 */

int main() {
    char str[] = "Hello 11 my   2 people 4 dwf 5 you 11    to be me 11 d 3";
    int counter = 0;
    int num = 10; //number to find
    char * cursor = str;
    while (cursor != str + strlen(str))
    {
        while (!isdigit(*cursor))
        {
            cursor++;
        }
        int parsed_number = strtol(cursor, &cursor, 10);

        if(parsed_number == num){
            counter++;
        }
    }
    printf("count is %d\n", counter);
    return 0;
}