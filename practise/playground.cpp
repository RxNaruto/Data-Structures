#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
         data=val;
         left=nullptr;
         right= nullptr;
    }
};

void preorder(struct Node* root){
    if(root==nullptr){
        return;
    }
    else{
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
  struct Node* root = new Node(0);
  root->left= new Node(1);
  root->right= new Node(2);
  root->left->left= new Node(3);
   root->left->right= new Node(4);
    root->right->left= new Node(5);
     root->right->right= new Node(6);
     preorder(root);
 return 0;
}