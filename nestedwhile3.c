#include<stdio.h>
void main()
{

    int number=0;
    int colll=6;
    int roow=0;

    while(colll<6)
    {
        while(number<colll)
        {
            printf("*");
            number=number+1;



        }
        printf("\n");
        roow=roow+1;
        number=0;
        colll=colll-1;
            }
}