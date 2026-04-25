#include<stdio.h>
void main()
{
    int size;
    printf("enter the number of elements to store\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size;i++)
    {
        printf("enter the %d value \ni+1");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=size-1;i++)
    {
        printf("%d",a[i]);
    }
    printf("}");
}