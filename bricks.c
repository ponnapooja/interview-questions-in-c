#include <stdio.h>

void main()
{
    int small;
    int big;
    int goal;
    printf("enter the no.of small bricks/n");
    scanf("%d",&small);
    printf("enter the no, of big bricks/n");
    scanf("%d",&big);
    printf("enter the goal lenth/n");
    scanf("%d",&goal);
    int required=goal/5;
    if(required<=big)
    {
        int rem=goal-(required*5);
        if(rem<=small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        int rem =goal-(big*5);
        if(rem<=small)
        {
            printf("true");
        }
         else
        {
         printf("false");
        }
     }
    
}