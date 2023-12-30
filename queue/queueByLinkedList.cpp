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
class queue{
    
    node* front;
    node* back;
    public:
    queue(){
        front=nullptr;
        back=nullptr;
    }
    void push(int x){
        node* n=new node(x);
        if(front==nullptr){
            back=n;
            front=n;
            return; 
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front==nullptr){
            cout<<"the queue is empty"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){
        if(front==nullptr){
            cout<<"the queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==nullptr){
            cout<<"the queue is empty"<<endl;
            return true;
        }
        return false;
    }
};
int main()
{
    queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
 return 0;
}