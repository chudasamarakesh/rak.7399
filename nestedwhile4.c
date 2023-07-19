#include<stdio.h>
void main()
{

    int number=0;
    int tt=1;
    int rr=0;

    while(tt<6)
    {
        while(number<tt)
        {

            number=number+1;
            printf("%d",number);
        }

        printf("\n");
        number=0;
        tt=tt+1;
        rr=rr+1;
    }
}