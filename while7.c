// write a programe to print following pattern 
// 2,1,3,4,7,11,18,29,47,76,123....300
#include<stdio.h>
void main()
{

    int number1=2;
    int answer=0;

    answer=number1;
    printf("%d",answer);//2

    number1=number1-1;
    printf("%d",number1);//1

    while(answer<300)
    {


    answer=answer+number1;
    printf("%d",answer);//3

    number1=number1+answer;
    printf("%d",number1);
    }

    // answer=answer+number1;
    // printf("%d",answer);

    // number1=number1+answer;
    // printf("%d",number1);
}


  