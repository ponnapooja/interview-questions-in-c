#include<stdio.h>
void main()
{
    int tea,candy;
    printf("enter the amount tea and candy\n");
    scanf("%d %d,&tea,&candy");
    if(tea>=5||candy>=5)
    {
        printf("1");
    }
        else if(tea>=2*candy||candy>=2*tea)
        {
            printf("0");
        }
        else
        {
            printf("2");
        }
        }