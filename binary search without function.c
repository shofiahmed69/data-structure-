#include<stdio.h>
int main()
{
    int lower=0,uper=4,mid,f=0,item;
    int a[5]={10,20,30,40,50};
    printf("enter the item:");
    scanf("%d",&item);
    while(lower<=uper)
    {
        mid=(lower+uper)/2;
        if(a[mid]==item)
        {
        f=1;
        break;
        }
        if(a[mid]<item){
            lower=mid+1;
        }
        else {
            uper=mid-1;
        }
    }
    if(f==1){
        printf("item found %d",mid);
    }
    else {
        printf("item not found ");
    }
    return 0;
}
