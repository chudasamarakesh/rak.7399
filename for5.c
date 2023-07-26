// write a programe to print to inverted full pyramid
#include <stdio.h>
void main()
{

    int count = 0;

    for (count = 0; count < 6; count++)
    {
        printf("*");
        printf("_");
    }

    printf("\n");
    for (count = 0; count < 5; count++)

    {
        printf("_");
        printf("*");
    }
    printf("\n");
    printf("_");
    for (count = 0; count < 4; count++)
    {
        printf("_");
        printf("*");
    }

    printf("\n");
    printf("_");
    printf("_");
    printf("_");
    for (count = 0; count < 3; count++)
    {
        printf("*");
        printf("_");
    }

    printf("\n");
    printf("_");
    printf("_");

    printf("_");
    for (count = 0; count < 2; count++)
    {
        printf("_");
        printf("*");
    }

    printf("\n");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("_");
    printf("*");
}