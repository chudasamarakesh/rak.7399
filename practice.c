  // write a programe to store 5 match runs for 1 players find avarage and total arrange the runs in 

#include<stdio.h>
void main()
{
int runs[5];
int count=0;

printf("enter the runs for player 1");


for(count=0;count<5;count++)
{
  printf("\nthe runs for match%d",count+1);
 scanf("%d",&runs[count]);
}

for(count=0;count<5;count++)
{printf(" \nthe  runs for match are %d are :%d",count+1,runs[count]);}


}