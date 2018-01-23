# NN

#include <stdio.h>
void main()
{
    int t,min,hour;
    printf("enter the value");
    scanf("%d",&t);
    hour=t/60;
    min=t%60;
    printf("the time is %d.%d",hour,min);
}
