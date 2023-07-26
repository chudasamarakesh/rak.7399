// write a programe to print hollow half piramid
#include <stdio.h>
void main()
{

    int count = 0;
    int flash=0;
    {
        for (count = 0; count < 6; count = count + 1)
        {
            printf("*");
        }

        for(flash=0;flash<4;flash=flash+1)
       { 
        printf("\n");
        printf("*");
        for (count = 0; count < 2; count = count + 1)
        {
            printf("_");
        }
        printf("*");
        printf("_");
        printf("_");
        printf("*");
       }
        // printf("\n");
        // printf("*");
        //  for(count=2;count<4;count=count+1)
        //  {printf("_");}
        // //  printf("_");
        //  printf("*");

        //  printf("\n");
        //  for(count=2;count<4;count=count+1)
        //  {printf("*");}
        // //printf("*");
        printf("\n");
        printf("*");
    }
}