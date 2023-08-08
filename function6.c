#include <stdio.h>


void astrik(int count,int space)
{


int flash=0;
printf("enter the  value of flash");

}
void main()

{
    int count = 0;
    int space = 0;
    int flash=0;

    for (count = 0; count < 9; count++)
    {
        printf("*");
    }

    printf("\n");
    for(flash=0;flash<9;flash++)
  {  
    printf("*");

    for (space = 0; space < 7; space++)
    {
        printf("_");
    }

    printf("*");
    printf("\n");
    }
  

    for(flash=0;flash<9;flash++)
    {
        printf("*");
    for(space=0;space<7;space++)
      {
          printf("_");
          }
         printf("*");
         
        printf("\n");
        }

      

        for(count=0;count<9;count++)
       { 
        printf("*");
        }


    void astrik(int count,int flash);

}