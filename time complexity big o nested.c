#include<stdio.h>
int main()
{
    int i,j,n,r;
    scanf("%d",&n);
    r=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r=r+i;
        }
    }
    printf("n=%d\n r=%d\n",n,r);
}
