#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void linkedListTraveral(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element is : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// Case 1 delete first Element

Node *deleteFirst(Node *head)
{
    Node *ptr = head;

    head = head->next;

    free(ptr);
    return head;
}

// Casee 2  Deleting an element from given index

Node *deleteAtIndex(Node *head, int index)
{
    Node *p = head;
    Node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}


// Case 3 Delet The last Element 

Node *deleteEnd(Node *head)
{
    Node *p = head;
    Node *q = head->next;

    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next =NULL;
    free(q);

    return head;
}



int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 44;
    second->next = third;

    third->data = 89;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    cout << "Linked List before deletion " << endl;
    linkedListTraveral(head);

    //head = deleteFirst(head);

    //head = deleteAtIndex(head,1);

    head = deleteEnd(head);

    cout << "Linked List after deletion " << endl;
    linkedListTraveral(head);

    return 0;
}
