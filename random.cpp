#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node *left;
    Node *right;

    Node(int data){
          this->val=data;
          this->left=NULL;
          this->right=NULL;


       
    }

};

Node* Buildtree(Node*root){
    cout<<"Enter the data ";
    int data;
    cin>>data;
    root = new Node(data);
  if(data== -1){
        return NULL;
    }
    cout<<"data for left node"<<endl;
    root->left = Buildtree(root->left);
    cout<<"data for right node"<<endl;
    root->right  = Buildtree(root->right);
    return root;
}
int main(){

  
   Node * root=NULL;
    root= Buildtree(root);


}