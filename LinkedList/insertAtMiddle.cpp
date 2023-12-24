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
void inserAtMiddle(node*& head,int val , int pos){
    node* current1 = head;
    node* current2=head;
    node* newnode=new node(val);
    for(int i=0;i<pos;i++){
        current1=current1->next;
        current2=current1->next;
    }
    current1->next=newnode;
    newnode->next=current2;
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
    inserAtMiddle(head,0,2);
    printlinkedlist(head);
 return 0;
}