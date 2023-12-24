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
    cout << "null" << endl;
}
bool detectionCycle(node* head){
    node* slow=head;
    node* fast= head;
    while(fast!=nullptr || fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }

    }
    return false;
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *forth = new node(4);
    node *fifth= new node(5);
    node* sixth = new node(6);
    node* seventh = new node(7);
    node* eighth = new node(8);
    node* nine= new node(9);
   

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=nine;
    nine->next=fifth;
    cout<<"is the linked list is cyclic "<<detectionCycle(head)<<endl;
 return 0;
}