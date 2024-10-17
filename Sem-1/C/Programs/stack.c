#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int arr[MAX];
int top = -1;

void push(int val);
void pop();
void peek();
int isEmpty();
int isFull();
int main()
{
    int val;
    int i;
    int ch;
    while (1)
    {
        printf("\n--------------- Main Menu --------------\n");
        printf("1. push() ");
        printf("2. pop() ");
        printf("3. peek() ");
        printf("4. display() ");
        printf("5. exit()");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter Element to Enter: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            printf("\n\nArray Elements: [ ");
            for (i = 0; i <= top; i++)
            {
                printf(" %d ", arr[i]);
            }
            printf(" ]");
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nInvalid choice! Please try again.");
            break;
        }
    }

    return 0;
}
void push(int val)
{
    if (isFull())
    {
        printf("\nStack is Full! You cannot enter more elements.");
    }
    else
    {
        top++;
        arr[top] = val;
        printf("\nElement %d added successfully!", arr[top]);
    }
}
void pop()
{
    if (isEmpty())
    {
        printf("\nStack is Empty!");
    }
    else
    {
        int val = arr[top];
        top--;
        printf("\nElement %d deleted successfully!", val);
    }
}
void peek()
{
    if (isEmpty())
    {
        printf("\nEmpty Stack!");
    }
    else
    {
        printf("\nTop Element: %d", arr[top]);
    }
}
int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == MAX - 1;
}
