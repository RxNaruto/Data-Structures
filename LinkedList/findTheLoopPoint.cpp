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
int toCheckLoopingPoint(node* head){
       int arr[10]={0};
       node* current=head;
       int val;
       for(int i=0;i<10;i++){
          val=current->data;
          current=current->next;
          arr[val]=arr[val]+1;
       }
       for(int i=0;i<10;i++){
        if(arr[i]>1){
            return i;
        }
       }
       return -1;
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *forth = new node(4);
    node *fifth =new node(5);
    node *sixth = new node(6);
    node *seventh = new node(7);
    node *nine = new node(8);
    node *tail = new node(9);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=nine;
    nine->next=tail;
    tail->next=fifth;
    cout<<"the looping point is "<<toCheckLoopingPoint(head);

 return 0;
}