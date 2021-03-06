/*Define an "Empty" function to check whether the linked list is empty or not.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int data ;
    node* next;
};
node* create_list();
void print_list(node* head);
int is_empty(node *list);
int main()
{
    node* head;
    head = NULL;
    head = create_list();
    printf("Empty : %d\n",is_empty(head));
    print_list(head);



    return 0;
}
int is_empty(node *list)
{

    if(list == NULL)
    {
        return 1;
    }
    return 0;
}

node* create_list()
{

    node *a,*b,*c,*d;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));
    d=(node*) malloc(sizeof(node));

    a->data=1;
    a->next=b;

    b->data=2;
    b->next=c;

    c->data=3;
    c->next=d;

    d->data=4;
    d->next=NULL;

    return a;
}

void print_list(node* head)
{

    node *temp;
    temp = head;

    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }

}

