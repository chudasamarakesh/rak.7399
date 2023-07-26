

// write a programe to print hollow full pyramid  xx
#include <stdio.h>
void main()

{
    int vor = 0, row = 0;

    for (vor = 0; vor < 1; vor++)

    {
        printf("_");
        printf("_");
        printf("_");
        printf("_");
        printf("_");
        printf("_");

        printf("*");
        printf("\n");
         printf("_"); 
        printf("_");
        printf("_");
        printf("_");
        printf("_");
        printf("*");
    }

    printf("_");
    printf("_");

    for (vor = 0; vor < 2; vor++)
    {
        printf("*");

        printf("\n");
        printf("_");
        printf("_");
        printf("_");
        printf("_");

        printf("*");
        printf("_");
        printf("_");
     printf("_"); 
        printf("_");
        printf("_");
    }

    printf("_");
     printf("_"); 
    printf("*");

    printf("\n");

    for (vor = 0; vor < 1; vor++)
    {    printf("_");  
         printf("_"); 
       printf("_");  
        printf("*");
        printf("_");
        printf("*");
        printf("_");
        printf("*");
        printf("_");
         printf("*"); 
          printf("_"); 
          printf("*"); 
           printf("_"); 
            printf("*");
             
    }
}