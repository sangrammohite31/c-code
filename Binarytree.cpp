#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

void lot(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
      
        q.pop();

        if(temp ==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
              cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

    // 23 12 -1 34 -1 -1 67 -1 -1

 
}


// void inordertraversel(node * root){ 
//     while(root->left){
//         root= root->left;
//     }
//     cout<<root->data;

//  }


void revordertrav(node* root){
    stack<node*> st;
    st.push(root);
  
    while(!st.empty()){
      
         node* temp = st.top();
         if(temp!=NULL){
 st.push(NULL);
         }
        
         if(temp->right){
            st.push(temp->right);
            cout<<temp->right->data;
         }
         if(temp->left){
            st.push(temp->left);
                  cout<<temp->left->data;
         }
        
         if(temp==NULL){
               cout<<"here";
              while(!st.empty()){
            
                if(st.top()==NULL){
                    cout<<endl;
                    st.pop();
                }else{
                    

                     node* pr = st.top();
                cout<<pr;
                st.pop();}
            }
         }
       
    }


}
node * BuildTree(node *root){
    cout<<"Enter the Daata "<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if(data== -1){
        return NULL;
    }
cout<<"Enter data for inserting left "<<data<<endl;
root->left = BuildTree(root->left);
cout<<"Enter data fro insert right"<<data<<endl;
root->right = BuildTree(root->right);

return root;
}
int main(){
    node* root = NULL;
  
   

    cout<<root;
    root = BuildTree(root);
// cout<<root;


// lot(root);
cout<<"trying inordertraersel";
revordertrav(root);
}