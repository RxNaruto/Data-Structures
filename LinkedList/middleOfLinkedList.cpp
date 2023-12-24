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
int middleOfLinkedList(node* head){
    node* current=head;
    int length=0;
    while(current!=nullptr){
        current=current->next;
        length++;
    }
    if(length%2!=0){
        node* pos=head;
        int position=(length-1)/2;
        for(int i=0;i<position;i++){
            pos=pos->next;

        }
        int newpos= pos->data;
        return newpos;

    }
    else{
        return -1;
    }
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *forth = new node(4);
    node *tail = new node(5);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next=tail;

    cout<<"the middle of linkedlist is "<<middleOfLinkedList(head)<<endl;
 return 0;
}