// write a programe to findout area of circle
#include<stdio.h>

float getpi()
{

    float pi=3.14159;
     return pi;
}
void main()
{

    int radius=0;
    float answer=0;
    float pi=0;
    printf("enter the value of radius");
    scanf("%d",&radius);

    pi=getpi();

    answer=pi*(radius*radius);
    printf("the value of area of circle is %f",answer);
}