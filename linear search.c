#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 30;
    int found= -1;
    for( int i=0;i<n;i++)
    {
    if(arr[i]==key)
    {
    found = i;
    break;
}
}
if(found!=-1)
printf("Element %d found at index %d\n", key,found);
    else
    printf("Element %d not found\n",key);
    return 0;
}