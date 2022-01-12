/**
 * 2.Есть массив 987654321
    Сделать 975312468
    Грубо говоря
 */
#include <stdio.h>
#include <stdlib.h>


void printArray(const int * array, int size);
void swap(int * A, int * B);
void sort(int * array, int size);

int main() {
    int N;

    printf("Enter N: ");
    scanf("%d", &N);
    fflush(stdin);

    int *startArray;
    startArray = (int *) malloc(N * sizeof(int));  // Dynamic array
    //Init array by [N,N-1,...2,1]
    for (int i = 0; i < N; ++i)
    {
        startArray[i] = N-i;
    }

    printArray(startArray, N);
    //Multiply even arr element on -1
    for (int i = 0; i < N; i++)
        if (startArray[i] & 1) // Check for odd
            startArray[i] *= -1;
    //Then sort in normal way
    sort(startArray, N);
    //Undo changes
    for (int i=0 ; i<N ; i++)
        if (startArray[i] & 1)
            startArray[i] *= -1;

    printf("\n");
    printArray(startArray, N);

    free(startArray);
    return 0;
}

void printArray(const int * array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ",array[i]);
    }
}

void sort(int * array, int size)
{
    int i, j;
    for (i = 0; i < size-1; i++)
        // Last i elements are already in place
        for (j = 0; j < size-i-1; j++)
            if (array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
}

void swap(int * A, int * B)
{
    int tmp = *A;
    *A = *B;
    *B = tmp;

}