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
int intersectionPoint(node* head){
      node* ptr1=head;
      node* ptr2=head;
      int count1=0,count2=0;
      while(ptr1!=nullptr){
        count1++;
      }
      while(ptr2!=nullptr){
        count2++;
      }
      ptr1=head;
      int length=count1-count2;
      for(int i=0;i<length;i++){
        ptr1=ptr1->next;
      }
      while(ptr1!=ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
      }
      int data=ptr1->data;
      return data;
}
int main()
{
    node *a1 = new node(1);
    node *a2 = new node(2);
    node *a3 = new node(3);
    node *a4 = new node(4);
    node *a5 = new node(5);
    node *a6 = new node(6);
    node *a7 = new node(7);
    node *a8 = new node(8);

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a8->next = a7;
    a7->next = a6;
    a6->next = a4;
    cout<<"the intersection point is "<<intersectionPoint(a1);

    return 0;
}