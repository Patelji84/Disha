#include<iostream>

using namespace std;

class Node {
    public :

    int data;

    Node *next = NULL;
    Node *prev=NULL;
};

void DoublylinkedListTraversal(Node *ptr)
{
    while(ptr != NULL)
    {
        cout<<"Elemnet : "<<ptr->data<<endl;
        ptr = ptr->next;

       
    }
}

Node *insertAthead(Node *head, int data)
{
    Node *ptr = (class Node *) malloc(sizeof(class Node));
    ptr->data =data;

    ptr->next =head;
    if (head !=NULL)
    {
         head->prev=ptr;
    }
    
   
     return  head =ptr;

}


Node *insertAtTheEnd(Node *head, int data)
{
    
    Node *ptr = (class Node *) malloc(sizeof(class Node));

    ptr->data = data;

    Node *p = head;

    while(p->next !=NULL)
    {
        p= p->next;

    }

    p->next = ptr;
    ptr->next=NULL;
    ptr->prev = p;

    return  head;

}


Node *InsertAtAfterNode (Node *head, Node *prevNode,int data)
{
      Node *ptr = (class Node *) malloc(sizeof(class Node));
      ptr->data = data;
       ptr->next = prevNode->next;

         prevNode->next = ptr;


return head;
}

int main()
{
     Node *head;
    Node *second;
    Node *third;
     Node *fourth;

    head =(class Node *) malloc(sizeof(class Node));
    second =(class Node *) malloc(sizeof(class Node));
    third=(class Node *) malloc(sizeof(class Node));
    fourth=(class Node *) malloc(sizeof(class Node));

    head->data=30;

     head->prev = NULL;
      head->next = second;
     
     second -> data = 20;
     second->next = third;
    second->prev = head;


   third-> data = 40;
    third->next = fourth;
    third->prev = second;

     fourth -> data = 50;
    fourth->next = NULL;
    fourth->prev = third;

    

 cout<<"Linked list before insertion"<<endl;
   
 DoublylinkedListTraversal(head);

 //head = insertAthead(head,6);

// head = insertAtTheEnd(head, 89);

head = InsertAtAfterNode(head,third,78);

 cout<<"Linked list after insertion"<<endl;
   
 DoublylinkedListTraversal(head);

 return 0;

}