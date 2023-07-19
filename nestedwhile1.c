#include<stdio.h>
void main()
{

    int count=0;
    int number=0;
    int temp=6;

    while(temp<6)
    printf("%d",temp);
    {
        while(count<temp)
        printf("%d",count);
        {

        printf("*");
        count=count+1;
        }
    
    printf("\n");
    number=number+1;
    count=0;
    temp=temp-1;
}
}