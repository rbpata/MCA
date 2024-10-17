#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int arr[MAX];
int f = -1;
int r = -1;

void enQueue(int val) {
    if (f == (r+1)%MAX ) {
        printf("\nOverflow !!");
    } else {
        if (f == -1)
            f  = 0;
        r = (r+1) % MAX;
        arr[r] = val;
        printf("\n%d Value is Added !! ", arr[r]);
    }
}

void deQueue() {
    if (f == -1) {
        printf("\nUnderflow !!");
    } else {
        printf("\nElement %d Deleted !!", arr[f]);
        if (f == r) {
            f = r = -1;
            
        } else {
            f = (f+1)%MAX;
        }
        printf("\nThere is no element in queue !!");
    }
}

void display() {
    int i;
    printf("\n\nArray Elements: [ ");
    for (i = f; i != r; i = (i+1)%MAX) {
        printf(" %d ", arr[i]);
    }
    printf(" ]");
}

void peek() {
    if (r == -1) {
        printf("\nEmpty Queue!");
    } else {
        printf("\nTop Element: %d", arr[r]);
    }
}

int main() {
    int val;
    int ch;
    while (1) {
        printf("\n--------------- Main Menu --------------\n");
        printf("1. Enqueue() ");
        printf("2. Dequeue() ");
        printf("3. peek() ");
        printf("4. display() ");
        printf("5. exit()");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("\nEnter Element to Enter: ");
            scanf("%d", &val);
            enQueue(val);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
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
