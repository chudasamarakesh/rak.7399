// write a programe to print following pattern
//0,1,3,6,10,15,21,28,36,45,55....1000

#include<stdio.h>
void main()
{


    int number=0;
    int number1=1;
    int answer=1;

    answer=number;
    printf("%d",answer);
    while(number<1000)

   { number=number1+answer;
    printf("%d",number);
    number1=number1+1;
    

    answer=number+number1;
    printf("%d",answer);
    number1=number1+1;
}
    // number=number1+answer;
    // printf("%d",number);
    // number1=number1+1;

    // answer=number+number1;
    // printf("%d",answer);
    // number1=number1+1;
    
    

}
