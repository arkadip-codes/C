#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
typedef struct stack
{
    int data[SIZE];
    int top;
}stk;

void push(stk *s);
int pop(stk *s);
int peek(stk *s);

int main()
{
    stk *s = (stk *)malloc(sizeof(stk));
    s->top = -1;
    int choice, value;
    while(1)
    {
        printf("1. Push\n2. Pop\n3. Peek\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                push(s);
                break;
            case 2:
                pop(s);
                break;
            case 3:
                peek(s);
                break;
            case 4:
                exit(0);
        }
    }
    free(s);
    return 0;
}

void push(stk *s)
{
    int value;
    if(s->top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        s->top++;
        printf("Enter value to push: ");
        scanf("%d", &value);
        s->data[s->top] = value;
        printf("Pushed value: %d\n", value);
    }
}

int pop(stk *s)
{
    int value = 0;
    if(s->top == -1)
    {
        printf("Stack Underflow\n");    
    }
    else
    {
        value = s->data[(s->top)--];
        s->top--;
        printf("Popped value: %d\n", value);
    }
}

int peek(stk *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        printf("Top value: %d\n", s->data[s->top]);
        return s->data[s->top];
    }
}