#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define Size 5
void push(int*Stack, int x);
void pop(int*a);
void display(int*a);
int top=-1;
int Stack[Size];
int main()
{
    int x,ch;
    while (1)
    {
        printf("\n 1) Push");
        printf("\n 2) Pop");
        printf("\n 3) Dipslay");
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element : ");
            scanf("%d", &x);
            push(Stack,x);
            break;
        case 2:
            pop(Stack);
            break;
        case 3:
            display(Stack);
            break;
        case 4:
            exit(0);
            break;
        }
    }
}

void push(int*Stack,int x)
{
    if (top >= Size-1)
        printf("Stack is overflown ");
    else
    {
        top=top+1;
        Stack[top]=x;
    }
}
void display(int*Stack)
{
    int i;
    if (top == -1)
        printf("\n Stack is Empty ");
    else
    {
        for(i=top;i>=0;i--)
            printf("%d \n ",Stack[i]);
    }
}
void pop(int*Stack)
{
    int x;
    if (top == -1)
        printf("\n Stack is Underflown ");
    else
    {
        printf("Deleted element is %d \n ",Stack[top]);
        top=top-1;
    }
}
