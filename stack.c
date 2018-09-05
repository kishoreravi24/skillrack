#include<stdio.h>
#include<stdlib.h>
#define capacity 5
int stack[capacity],top=-1;
int push(int ele,int stack[]);
int pop(int stack[]);
int display(int stack[]);
int main()
{
    push(5,stack);
    push(4,stack);
    push(3,stack);
    pop(stack);
    display(stack);
}
int push(int ele,int stack[])
{
    if(top==capacity-1)
    {
        printf("\nstac is full");
    }
    else
    {
        top++;
        stack[top]=ele;
    }
    return 0;
}
int pop(int stack[])
{
    int ele;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        top--;
        ele=stack[top];
    }
}
int display(int stack[])
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }
}
