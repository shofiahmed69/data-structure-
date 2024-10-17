#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter array elements:");
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
    for(j=i;j>=1;j--){
    if(a[j-1]>a[j]){
    temp=a[j-1];
    a[j-1]=a[j];
    a[j]=temp;
    }
    }
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
