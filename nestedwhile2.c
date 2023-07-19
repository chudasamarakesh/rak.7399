#include<stdio.h>
void main()
{

    int count=0;
    int roww=0;
    int coll=6;

   while(roww<6)
   {

    while(count<coll)
    {

        count=count+1;
        printf("%d",count);
    }
    
    printf("\n");
    count=0;
    coll=coll-1;
    roww=roww+1;
   }

}