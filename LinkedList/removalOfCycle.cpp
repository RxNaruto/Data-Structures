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
void removalOfCycle(node*& head){
    node* fast=head;
    node* slow=head;
    do
    {
       slow=slow->next;
       fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=nullptr;

    
}
void printlinkedlist(node *head)
{
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "null" << endl;
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *forth = new node(4);
    node *fifth =new node(5);
    node *sixth = new node(6);
    node *seventh = new node(7);
    node *nine = new node(8);
    node *tail = new node(9);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=nine;
    nine->next=tail;
    tail->next=fifth;
    removalOfCycle(head);
    printlinkedlist(head);
   
    
 return 0;
}