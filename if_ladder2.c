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

    else if(month==6&&date<=21&&date<=30||month==7&&date<=22&&date>0)
    {

        printf("your cancer is aries");
    }
    else if(month==7&&date>=23&&date<=31||month==8&&date<=22&&date>0)
    {
        printf("your leo is aries");
    }
}
