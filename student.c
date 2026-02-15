#include<stdio.h>
int main()
{
    int id;
    float m1,m2,m3,total,average;
    printf("Enter Student ID:");
    scanf("%d",&id);
    printf("Enter Marks for 3 subjects:\n");
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    average=total/3;
    printf("\n---Student Details---\n");
    printf("Student ID:%d\n",id);
    printf("Total Marks:%.2f\n",total);
    printf("Average Marks:%.2f\n",average);
    return 0;
}