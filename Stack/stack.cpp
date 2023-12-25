#include<iostream>
using namespace std;
int n=100;
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top =-1;
    }
    void push(int x){
        if(top==(n-1)){
            cout<<"stack overflow"<<endl;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"the stack is already empty"<<endl;
            return;
        }
        top--;

    }
    int Top(){
        if(top==-1){
            cout<<"the stack is already empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }

};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"the top element of stack is"<<st.Top()<<endl;
    st.pop();
    cout<<"The topmost element of stack is "<<st.Top()<<endl;
 return 0;
}