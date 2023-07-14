// write a programme to findout bmi of user and also find his/her category
#include<stdio.h>
void main()
{

    float weight=0,foot=0,inch=0,foot_meter=0,inch_meter=0,total_meter=0,bmi=0;

    printf("weight is");
    scanf("%f",&weight);

    printf("height is foot is");
    scanf("%f",&foot);

    printf("height is inch is");
    scanf("%f",&inch);

    foot_meter=foot/3.281;
    printf("\nfoot meter is %f",foot_meter);

    inch_meter=inch/39.37;
    printf("\ninch meter is %f",inch_meter);

    total_meter=foot_meter+inch_meter;
    printf("\ntotal meter is %f",total_meter);


    bmi=weight/(total_meter*total_meter);
    printf("\nbmi is %f",bmi);

    {

        if(weight<16 && weight>0)
        printf("severe thinness");

        else if
        
    
            (weight>16 && weight<=17)
            printf("moderate thinness");

           else if
           

            (weight>17 && weight<=18.5)
            printf("mild thinness");
           
           else if
           {
            (weight>18.5 && weight<=25)
            printf("normal");
           }

           else if 

           {
            (weight>25 && weight<=30)
            printf("overweight");
           }

           else if 
           {
             (weight>30 && weight<=35)
             printf("obese class1");
           }
           else if 

           {

            (weight>35 && weight<=40)
            printf("obese class2");
        
           }
           else if 
           {
            (weight<40 && weight>=45)
            printf("obese class3");


            
           }
           
           
           
           
           
        