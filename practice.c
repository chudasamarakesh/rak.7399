//write a programe to findout how many days user given month has you cannot use else if ladder you cannot use and or 
#include<stdio.h>
void main () 
{
    int month = 0;

    printf("enter value of month");
    scanf("%d",&month);
    if (month==1)
    {
        printf("this month is 31 days");
    }
    else 
    {
        if (month == 2)
        printf(" this month is 28 and 29 days");
        if (month == 3)
        printf("this month is 31  days");
        if(month == 4)
        printf(" this month is 30 days");
        if(month == 5)
        printf(" this month is 31 days");
        if(month == 6)
        printf("this mont is 30 days");
        if(month == 7)
        printf("this month is 31 days");
        if(month == 8)
        printf("this month is 31 days ");
        if(month == 9)
        printf("this month is 30 days");
        if(month == 10)
        printf("this month is 31 days");
        if(month == 11)
        printf("this month is 30 days");
        if(month == 12)
        printf("enter value of 31 days");
    }

}
    