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
void insertAtAnyPlace(node* &head,int val,int place){
    node* current=head;
    for(int i=0;i<place-1;i++){
        current=current->next;
        
    }
    if(current->next==nullptr){
        cout<<"Out of list"<<endl;
        return;
    }
    node* newnode= new node(val);
    newnode->next=current->next;
    current->next=newnode;
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
   insertAtAnyPlace(head,100,2);
   printingNode(head);
 return 0;
}