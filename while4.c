// write a programe to print following pattern
// 1,2,4,6,8,10,12 ....8000
#include<stdio.h>
void main()
{

    int number=1,answer=0;

    while (answer<8000)
    {

        answer =number * number;
        printf("%d",answer);
        number =number+2;
        // answer=number+number;
        // printf("%d",answer);
        // number=number+1;
    }
}