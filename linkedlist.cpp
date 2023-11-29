#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while(ptr != NULL)
    {
        cout<<"Element:"<<ptr->data<<endl;
        ptr = ptr->next;
    }
}



int main()
{
    Node *head;
    Node *second;
    Node *third;

    head =(class Node *) malloc(sizeof(class Node));
    second =(class Node *) malloc(sizeof(class Node));
    third=(class Node *) malloc(sizeof(class Node));

     head->data = 9;
     head->next = second;

     second->data = 90;
    second->next = third;

    third->data = 99;
    third->next = NULL;

    linkedListTraversal(head);









    return 0;
}