//*Define a function to display(only value for each node)the complete linked list and do the same as problem 1(Don't use DMA)*//

#include<stdio.h>
typedef struct node Node;

struct node {
    int data;
    Node* next;
};
void print_List(Node* head);

int main (){
    Node a,b,c;
    Node *head;
    head = &a;
    a.data = 1;
    a.next = &b;
    b.data = 2;
    b.next = &c;
    c.data = 3;
    c.next = NULL;
    print_List(head);
}

void print_List(Node* head){
    Node* temp = head;
         while(temp){
         printf("%d\t",temp->data);
         temp=temp->next;
    }
}

