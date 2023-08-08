// write a programe to perform multiplication of 2 variable using function
#include<stdio.h>

int getmulti(int a,int b)
{

    int answer=a*b;
    return answer;
}
void main()
{

    int number1,number2;
    int result;
    printf("enter the value of number1");
    scanf("%d",&number1);
    printf("enter the value of number2");
    scanf("%d",&number2);

    result=getmulti(number1,number2);
    printf("the value of result is %d",result);
}



