#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
void printlinkedlist(node *head)
{
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout<<"null"<<endl;
}
void insertAtBegining(node*& head){
    node* newhead=new node(0);
    newhead->next=head;
    head=newhead;
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *tail = new node(4);

    head->next = second;
    second->next = third;
    third->next = tail;
    cout << "linked list before inserting" << endl;
    printlinkedlist(head);
    insertAtBegining(head);
    cout<<"linked list after inserting"<<endl;
    printlinkedlist(head);
 return 0;
}