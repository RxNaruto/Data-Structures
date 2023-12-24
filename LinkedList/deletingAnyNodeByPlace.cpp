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
void deleteAnyNode(node*& head,int place){
    if(place==1 || place==4){
        cout<<"you are trying to delete head or tail "<<endl;
        return;
    }
    node* current1= head;
    node* current2=head;
    for(int i=0;i<(place-1);i++){
        current1=current1->next;
        current2=current1->next;
    }
    current1->next=current2->next;
    delete current2;
    
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *forth=new node(5);
    node *tail = new node(4);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = tail;
    cout << "linked list before inserting" << endl;
    printlinkedlist(head);
    deleteAnyNode(head,2);
    printlinkedlist(head);
 return 0;
}