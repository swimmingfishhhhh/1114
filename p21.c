#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(int argc, char** argv)
{
    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();
    printf("\n");

    return 0;
}

void staticArrayInit(void)
{
    static int arrayl[3];
    int i;

    printf("\nValues on entering staticArrayInit:\n");

    for (i = 0; i <= 2; i++)
    printf("arrayl[%d] = %d ", i, arrayl[i]);

    printf("\nValues on exiting staticArrayInit:\n");

    for (i = 0; i <= 2; i++)
        printf("arrayl[%d] = %d ", i, arrayl[i] += 5);
}

void automaticArrayInit(void)
{
    int array2[3] = { 1,2,3 };
    int i;

    printf("\n\nValues on entering automicArrayInit:\n");

    for (i = 0; i <= 2; i++)
    printf("array2[%d] = %d ",i,array2[i]);

    printf("\nValues on exiting automicArrayInit:\n");

    for (i = 0; i <= 2; i++)
        printf("array2[%d] = %d ",i,array2[i] += 5);
}
