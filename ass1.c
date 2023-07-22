// write a programme to findout the following pattern
// 3,6,9,12,15,18,21,24,27,30,33,36,39,42....10000
#include <stdio.h>
void main()
{

    int number = 3;
    int answer = 0;

    while (answer < 10000)
    {
    answer = number;
    printf("%d",answer);
    number=number+3;
    }

    // number=answer+number;
    // printf("%d",number);

    // answer=number+answer;
    // printf("%d",answer);
}