// this code will fail for pos 0 and 3

#include <iostream>
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
        prev = nullptr;
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
void printLinkedListFromTail(node *tail)
{
    node *current2 = tail;
    while (current2 != nullptr)
    {
        cout << current2->data << "->";
        current2 = current2->prev;
    }
    cout << "null" << endl;
}
void deleteLinkedList(node *&head, int pos)
{
    
    node *temp = head;
    int count = 0;
    while (temp != nullptr && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=nullptr){
    temp->next->prev = temp->prev;
    }
    delete temp;
}
void deleteHead(node *&head)
{
    node *current = head;
    current->next->prev = nullptr;
    head = current->next;
    delete current;
}
int main()
{
    node *head = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *tail = new node(4);

    head->next = second;
    second->next = third;
    second->prev = head;
    third->next = tail;
    third->prev = second;
    tail->prev = third;
    cout << "linked list from the head" << endl;
    printlinkedlistFromHead(head);
    cout << "linked list from the tail" << endl;
    printLinkedListFromTail(tail);
    cout << "The new linked list after deletion" << endl;
    deleteLinkedList(head, 2);
    cout << "linked list from the head" << endl;
    printlinkedlistFromHead(head);
  

    return 0;
}