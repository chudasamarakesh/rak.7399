// write a  programe to solve the following series
// 1,5,12,22,35,51.....3000

#include<stdio.h>
void main()
{

int number=0;
int answer=1;
int number1=4;

number=answer;
printf("%d",number);//1

while(number<3000)

{answer=number1+number;
printf("%d",answer);//5
number1=number1+3;

number=number1+answer;
printf("%d",number);
number1=number1+3;}//12
}