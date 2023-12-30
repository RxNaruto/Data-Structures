#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }
        int val = pop();
        s1.push(x);
        return val;
    }
    bool empty()
    {
        if (s1.empty())
        {
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

    cout << q1.pop() << endl;
    cout << q1.pop() << endl;
    cout << q1.pop() << endl;
    cout << q1.pop() << endl;
    return 0;
}