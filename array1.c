//write a programe  to store 5 match runs for 1 player find average and total 

#include<stdio.h>
void main()
{

    int runs[5];
    int number=0;
    float avarage=0;
    int total=0;

    for(number=0;number<5;number++)
    {printf("enter the value of runs is  %d:",number+1 );
    scanf("%d",&runs[number]);}

    number=0;
    total=0;
    while(number<5)
    {total=total+runs[number];
    number=number+1;}
   {
     printf("total runs is %d\n ",total);
}
    avarage=0;

    avarage=total/5;
    printf("avarage is %f",avarage);

}
