


//deleting node according to the data value

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
void deleteAnyNode(node*& head,int val){
    node* current1=head;
    node* current2=head;
    while(current1->next->data!=val){
        current1=current1->next;
        current2=current1->next->next;
    }
    node* todelete=current1->next;
    current1->next=current2;
    delete todelete;
    

}
void printlinkedlist(node *head){

    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout<<"null"<<endl;
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *forth = new node(5);
    node *tail = new node(4);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next=tail;
    cout << "linked list before inserting" << endl;
    printlinkedlist(head);
    deleteAnyNode(head,5);
    printlinkedlist(head);
 return 0;
}