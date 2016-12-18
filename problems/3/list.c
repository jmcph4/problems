#include "list.h"

/* initialise the list pointed to by head with data */
void init(int data, Node* head)
{
    if(head != NULL)
    {
        head->data = data;
        head->next = NULL;
    }
}

/* append data to the list pointed to by head */
void append(int data, Node* head)
{
    Node* ptr = head;
    
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
        if(ptr->next == NULL)
        {
            /* allocate new node and append */
            Node* new_node = calloc(1, sizeof(Node));
            new_node->data = data;
            ptr->next = new_node;
        }
    }
}

/* free the list pointed to by head */
void cleanup(Node* head)
{
    if(head != NULL)
    {
        Node* next = NULL;
        Node* ptr = head;
        
        for(ptr=head;ptr!=NULL;ptr=next)
        {
            next = ptr->next; /* keep track of next node */
            free(ptr);
        }
    }
}
