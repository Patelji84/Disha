#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};


void linkedListTraversal(Node *ptr)
{
    while(ptr != NULL)
    {
        cout<<"Elemnet : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
// case 1;

Node * insertAtFirst(Node *head, int data){
        
Node *ptr = (class Node *) malloc(sizeof(class Node));
 ptr-> data = data;

 ptr->next = head;
 return ptr;     
}



// Case 2 

Node *insertAtIndex(Node * head , int data , int index)
{
    Node *ptr = (class Node *) malloc(sizeof(class Node));
    Node *p = head;
    int i = 0;

     while (i!= index-1)
     {
         p = p-> next;
         i++;
     }
     
     ptr->data =data;
     ptr->next = p->next;
     p->next= ptr;

     return head;

}

Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = (class Node *) malloc(sizeof(class Node));
 ptr-> data = data;
 Node *p =head;

 while(p->next !=NULL)
 {
     p = p->next;
 }

 p->next = ptr;
 ptr->next = NULL;
 return head;

}

//Case 4;

Node *insertAfterNode( Node *head, Node *prevNode ,int data)
{
    Node *ptr = (class Node *) malloc(sizeof(class Node));
      ptr-> data = data;

      ptr -> next = prevNode->next;
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

     head->data = 9;
     head->next = second;

     second->data = 90;
    second->next = third;

    third->data = 99;
    third->next = fourth;

    fourth->data = 78;
    fourth->next = NULL;



    cout<<"Linked list before insertion"<<endl;
    linkedListTraversal(head);
   // head = insertAtFirst(head, 56);
   //head = insertAtIndex(head,56,2);
   // head = insertAtEnd(head , 89);
   
  // head = insertAfterNode(head,third,45);
   
   cout<<"Linked list after insertion"<<endl;
    linkedListTraversal(head);
    return 0;
}