#include <iostream>
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
    for(int i=0;i<9;i++){
    
        cout << current->data << "->";
        current = current->next;
    }
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
    tail->next=head;
    cout << "linked list before inserting" << endl;
    printlinkedlist(head);
    return 0;
}