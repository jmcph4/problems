#ifndef LIST_H_
#define LIST_H_

struct _Node
{
    int data;
    struct Node* next;
};

typedef struct _Node Node;

void init(int data, Node* head);
void append(int data, Node* head);
void cleanup(Node* head);

#endif /* LIST_H_ */
