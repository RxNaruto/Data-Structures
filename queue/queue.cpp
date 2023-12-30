#include<iostream>
using namespace std;
int n=100;
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
    arr=new int[n];
    front = -1;
    back=-1;
    }
    void push(int x){
        if(back==(n-1)){
            cout<<"queue is full"<<endl;
           
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"queue is empty"<<endl;
            return ;
        }
        front++;
    }
    int peek(){
       if(front==-1 || front>back){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    bool empty(){
        if(front==-1){
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
    q1.pop();
 return 0;
}