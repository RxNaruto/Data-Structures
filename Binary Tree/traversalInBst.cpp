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
void preorder(struct Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

        //       1
        //      / \
        //    2     3
        //   / \   / \
        //  4   5 6   7
        cout<<"The preorder traversal is "<<endl;
        preorder(root);
        cout<<endl;
        cout<<"The inorder traversal is "<<endl;
        inorder(root);
          cout<<endl;
        cout<<"The postorder traversal is "<<endl;
        postorder(root);
 return 0;
}