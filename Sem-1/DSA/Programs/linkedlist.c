#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *insertAtFront(struct node *);
struct node *insertAtEnd(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_before(struct node *);
struct node *display(struct node *);

int main()
{
    int ch;
    do
    {
        printf("\n--------------- MAIN MENU ------------------\n");
        printf("\n1.Insert at front.");
        printf("\n2.Insert at End.");
        printf("\n3.Insert before a giver node.");
        printf("\n4.Insert after given node.");
        printf("\n5.Delete at front.");
        printf("\n6.Delete at End.");
        printf("\n7.Delete a given Node.");
        printf("\n8.Delete after a giver node.");
        printf("\n9.Delete before given node.");
        printf("\n10.Display().");
        printf("\n11.EXIT.");
        printf("\n----------------------------------------------\n");
        printf("\nEnter Your Choice :- ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            start = insertAtFront(start);
            printf("\nInserted....");
            break;
        case 2:
            start = insertAtEnd(start);
            break;
        case 3:
            start = insert_before(start);
            break;
        case 4:
            start = insert_after(start);
            break;
        case 5:
            start = delete_beg(start);
            break;
        case 6:
            start = delete_end(start);
            break;
        case 7:
            start = delete_node(start);
            break;
        case 8:
            start = delete_after(start);
            break;
        case 9:
            start = delete_before(start);
            break;
        case 10:
            start = display(start);
            break;
        }
    } while (ch != 11);

    return 0;
}

struct node *insertAtFront(struct node * start)
{
    int val;
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data of the new Node :- ");
    scanf("%d", &val);

    newnode->data = val;

    if(start == NULL){
        newnode->next = NULL;
        start = newnode;
    }
    else{
        newnode->next=start;
        start = newnode;
    }
    return start;

}

struct node *insertAtEnd(struct node *start){

    int val;
    struct node * newnode;
    struct node * ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data of the new Node :- ");
    scanf("%d", &val);

    ptr = start;
    newnode->data = val;
    newnode->next = NULL;

    if(start == NULL){
        newnode->next = NULL;
        start = newnode;
    }
    else{
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
    return start;
}
struct node *insert_before(struct node *start){

    int val,pos;
    struct node * newnode,*ptr,*pptr;
    newnode = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter Data of the new Node :- ");
    scanf("%d", &val);

    printf("\nEnter a Data before you wanted to insert : ");
    scanf("%d", &pos);

    newnode->data = val;
    ptr=start;

    if(start == NULL){
        newnode->next = NULL;
        start = newnode;
    }
    else{
        if(ptr->next == NULL){
            printf("\nEntered Data not found !!");
        }
        else{
        while(ptr->data != pos ){
            pptr = ptr;
            ptr = ptr->next;
        
        }
        pptr->next = newnode;
        newnode->next = ptr;

        }

    }
    return start;

}
struct node *insert_after(struct node *start){

    int val,pos;
    struct node * newnode;
    struct node * ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data of the new Node :- ");
    scanf("%d", &val);

    printf("\nEnter a Data before you wanted to insert : ");
    scanf("%d", &pos);



    ptr = start;
    newnode->data = val;
    newnode->next = NULL;
    if(start == NULL){
        newnode->next = NULL;
        start = newnode;
    }
    else{
        while(ptr->data != pos){
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    return start;

}
struct node *delete_beg(struct node *start){}
struct node *delete_end(struct node *start){}
struct node *delete_node(struct node *start){}
struct node *delete_after(struct node *start){}
struct node *delete_before(struct node *start){}

struct node *display(struct node *start) {
    struct node *ptr = start;
    if (ptr == NULL) {
        printf("\nThe list is empty.");
        return start;
    }

    printf("\nLinked List Elements: [ ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("]");
    return start;
}
