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
node* reverseLinkedList(node*& head){
    node* current=head;
    node* next=head;
    node* prev =nullptr;
    while(current!=nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;


    }
    return prev;

}
int main(){

    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *tail = new node(4);

    head->next = second;
    second->next = third;
    third->next = tail;
    cout << "linked list before inserting" << endl;
    printlinkedlist(head);
    cout<<"new linked list"<<endl;
    node* newhead=reverseLinkedList(head);

    
    printlinkedlist(newhead);
 return 0;
}