#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
int main()
{
    struct Node* root = new Node(0);
    root->left= new Node(1);
    root->right= new Node(2);
    Node* current=root;
    cout<<current->left->data<<endl;
    cout<<current->right->data;
 return 0;
}