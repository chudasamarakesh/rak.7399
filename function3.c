// write a programe to perform subtraction of 2 variable
#include<stdio.h>
void getsub(int a,int z)
{
int answer=a-z;
printf("the value of answer is %d",answer);

}
void main()
{

    int number1=0;
    int number2=0;
    printf("enter the value of number1");
    scanf("%d",&number1);
    printf("enter the value of number2");
    scanf("%d",&number2);
    getsub(number1,number2);

}