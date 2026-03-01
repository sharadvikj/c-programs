#include <stdio.h>
int main() 
{
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
     {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    } else {
        if (marks >= 90)
         {
            printf("Grade: A\n");
            printf("Excellent work! Keep it up.\n");
        } else if (marks >= 75)
         {
            printf("Grade: B\n");
            printf("Very good performance.\n");
        } else if (marks >= 50)
         {
            printf("Grade: C\n");
            printf("Good effort, but there is room for improvement.\n");
        } else if (marks >= 35)
         {
            printf("Grade: D\n");
            printf("You passed, but you should study harder.\n");
        } else
         {
            printf("Grade: F\n");
            printf("Unfortunately, you failed. Do not give up — try again!\n");
        }
    }

    return 0;
}
