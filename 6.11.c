#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size)
{
    int i, j;
    int swapped;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {11,51,68,42,74,99,36,80,27,0};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array:\n");
    printArray(array, size);

    bubbleSort(array, size);

    printf("Sorted array:\n");
    printArray(array, size);

    return 0;
}

