// write a programme to income tax

#include<stdio.h>
void main()
{

    float income=0;
    printf("enter the value of income");
    scanf("%f",&income);

    yearly income=income*12;

    if(income>0 && income<300000)
    {

        income=income-((income*5)/100);

        printf("your net income ");

        else if(income>=300000 && income<500000);
        {

        income=income-((income*10)/100);

        printf("your net income");
        }


        else if(income>=500000 && income<800000);
        {

        income=income-((income*20)/100);

        printf("your net income");
        }

        else if(income>=800000);
        {

            income=income-((income*30)/100);

            printf("your net income ");


        }

        else()
        {
        printf("you are tax freee....");





    
    


    }
}