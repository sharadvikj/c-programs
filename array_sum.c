#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number of elements;");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d integers:\n",size);
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
printf("Array contents:\n");
for(int i=0;i<size;i++)
{
printf("%d",arr[i]);
}
printf("\n");
int sum=0;
for(int i=0;i<size;i++)
{
    sum+=arr[i];
}
printf("Sum of elements:%d\n",sum);
return 0;
}

