#include<stdio.h>
int main()
{
    int item,i;
    int a[5]={34,54,78,56,48};
    printf("enter searching item:");
    scanf("%d",&item);
    for(i=0;i<5;i++)
    {
        if(a[i]==item)
        {
            printf("item found %d",i);
            break;
        }
    }
    if(i>=5)
    {
        printf("item not found ");

    }
    return 0;
}
