//deleting the head of linked list


#include<iostream>
using namespace std;
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
void deleteHead(node*& head){
    node* todelete =head;
    head=todelete->next;
    delete todelete;
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
    deleteHead(head);
    cout<<"linked list after deletion"<<endl;
      printlinkedlist(head);

 return 0;
}