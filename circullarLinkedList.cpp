#include<iostream>

using namespace std;

class Node 
{

    public:
    int data;
    Node *next;
};


 void linkedListTraveral(Node *head)
 {
     Node *ptr = head;

     do{
         cout<<"Element is :"<<ptr->data<<endl;

         ptr = ptr->next;
     }
     while(ptr!=head);
     

 }

 Node *insertAtFirst(Node *head,  int data)
 {
      Node * ptr = (class Node *) malloc(sizeof(class Node));

      ptr->data = data;

      Node *p = head->next;

      while(p->next !=head)
      {
          p = p->next;
      }

      // At this point p points to the last node of this circular linked list

      p->next = ptr;
      ptr->next = head;
      head = ptr;

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
    fourth->next = head;

    cout << " Circullar Linked List before insertion " << endl;
    linkedListTraveral(head);

     head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 58);
    head = insertAtFirst(head, 59);


    cout << " Circullar Linked List after insertion  " << endl;
    linkedListTraveral(head);

    return 0;
}
