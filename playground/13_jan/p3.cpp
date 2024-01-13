#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=nullptr;
    }
};
void printingNode(node* head){
    node* current= head;
    while(current!=nullptr){
        cout<<current->data<<" -> ";
        current=current->next;
    }
    cout<<"nullptr"<<endl;
}
void insertAtEnd(node* &head,int val){
    node* newtail=new node(val);
    node* current =head;
    while(current->next!=nullptr){
        current=current->next;

    }
    current->next=newtail;

}
int main()
{
    node *head=new node(1);
   
   node *second=new node(2);
   node *third=new node(3);
   node *tail=new node(4);

   head->next=second;
   second->next=third;
   third->next=tail;
   printingNode(head);
insertAtEnd(head,100);
   printingNode(head);
 return 0;
}