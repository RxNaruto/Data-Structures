#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = nullptr;
        prev=nullptr;
    }
};
int findLoopPoint(node* head){
    node* fast=head;
    node* slow=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while(fast->next!=slow->next){
        slow=slow->next;
        fast=fast->next;
    }
    int val;
    val=fast->next->data;
    return val;
    
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
   
    cout<<"The loop point is "<< findLoopPoint(head);
 return 0;
}