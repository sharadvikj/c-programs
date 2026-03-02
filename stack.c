#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value)
{
    if (top == MAX -1)
    {
        printf("Stack overflow");
    }
    else
    {
        stack[++top] = value;
        printf("%d pushed to stack\n",value);
    }
}
int pop()
{
    if(top == -1)

    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
void display()
{
    if (top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(int i =0;i <=top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
        }
    }
    int main()
    {
        push(10);
        push(20);
        push(30);
        display();
        printf("%d popped from stack\n", pop());
        display();
        return 0;
    }
