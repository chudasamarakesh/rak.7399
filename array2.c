#include<stdio.h>
void main()
{
    char name[22];
    int count=0;

    printf("enter the name");
    for(count=0;count<22;count++)
    
    {
    scanf("%c",&name[count]);
    if(name[count]=='\n')
    {
        break;
    }
    }

    printf("your name is:");
    for(count=0;count<22;count++)
    {

        printf("%c",name[count]);
        if(name[count]=='\n')
        {
            break;
        }
    }
}


