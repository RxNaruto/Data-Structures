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
void printlinkedlistFromHead(node *head)
{
    node *current1 = head;
    while (current1 != nullptr)
    {
        cout << current1->data << "->";
        current1 = current1->next;
    }
    cout << "null" << endl;
}
void printLinkedListFromTail(node *tail){
    node *current2 =tail;
    while(current2!=nullptr){
        cout<<current2->data<<"->";
        current2=current2->prev;
    }
    cout << "null" << endl;
}
node* insertAtEnd(node*& head,int val){
    node* temp=head;
    node* newtail=new node(val);
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newtail;
    newtail->prev=temp;
    return newtail;
}

int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *tail = new node(4);

    head->next = second;
    second->next = third;
    second->prev=head;
    third->next = tail;
    third->prev=second;
    tail->prev=third;
    cout << "linked list from the head" << endl;
    printlinkedlistFromHead(head);
    cout << "linked list from the tail" << endl;
    printLinkedListFromTail(tail);
    cout<<"new linked list is"<<endl;
    node* newtail = insertAtEnd(head,10);
    tail=newtail;
    
    printlinkedlistFromHead(head);
    printLinkedListFromTail(tail);
    



 
 return 0;
}