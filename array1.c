// write a prorgame to score of 5 match in one player and also findout average and total

#include<stdio.h>
void  main()
 {
    int match[5];
    int number = 0;
    int total = 0;
    float average=0;
    for (number = 0; number < 5; number++) {
        printf("Enter the match runs in match %d: ", number + 1);
        scanf("%d", &match[number]);
    }

    number = 0;
    total = 0;
    while (number < 5) {
        total = total + match[number];
        number = number + 1;
    }

     average = total / 5;

    printf("Total runs is  %d\n", total);
    printf("Average runs is %f,\n", average);

   
}
