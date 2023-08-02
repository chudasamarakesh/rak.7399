#include<stdio.h>

void printline(char symbol,int size)
{

    int count=0;
    for(count=0;count<size;count++)
    {
        printf("%c",symbol);
    }
}
void main()
{
char symbol=0;
int size=0;
printf("enter symbol for line");
scanf("%c",&symbol);
printf("enter size for line");
scanf("%d",&size);

printline(symbol,size);
printf("\nchudasama rakesh\n");
printline(symbol,size);

}