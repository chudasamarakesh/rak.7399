// write a programe to findout zodiac sign of user
#include<stdio.h>
void main()
{

    int month=0;
    int date=0;
printf("enter the value of month");
scanf("%d",&month);

printf("enter the value of date");
scanf("%d",&date);

// check
if(month==3&&date>=21&&date<=31||month==4&&date<=19&&date>0)
{

    printf("your zodiac is aries");
}

    else if(month==4&&date>=20&&date<=30||month==5&&date<=20&&date>0)
    {

    printf("your taurus is aries");
    }
    else if(month==5&&date>=21&&date<=31||month==6&&date<=20&&date>0)
    {
        printf("your gemini is aries");
    }

    else if(month==6&&date>=21&&date<=30||month==7&&date<=22&&date>0)
    {

        printf("your cancer is aries");
    }
    else if(month==7&&date>=23&&date<=31||month==8&&date<=22&&date>0)
    {
        printf("your leo is aries");
    }
    else if(month==8&&date>=23&&date<=31||month==9&&date<=22&&date>0)
    {
        printf("your virgo is aries");
    
    }
    else if(month==9&&date>=23&&date<=30||month==10&&date>=22&&date<0)
    {
        printf("your libra is aries");

    }

    else if(month==10&&date>=23&&date<=31||month==11&&date>=21&&date<=0)
    {
        printf("your scorpio is aries");
    }

    else if (month==11&&date>=22&&date<=30||month==12&&date<=21&&date>0)
    {

        printf("your sagittarius is aries");

    }

    else if(month==12&&date>=22&&date<=31||month==1&&date<=19&&date>0)

    {

        printf("your capricorn  is aries");

    }

    else if(month==1&&date>=20&&date<=31||month==2&&date<=18&&date>0)
    {

        printf("your aquarius is aries");

    }

    else if(month==2&&date>=19&&date<=29||month==3&&date<=20&&date>=0)
    {
    
    printf("your pisces is aries");
    }
    else
    { 

        printf("zodiac sign is not aries");
    }

}
