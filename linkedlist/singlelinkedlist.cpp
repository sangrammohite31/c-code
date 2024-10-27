#include<iostream>

using namespace std;

class Node {

    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next =NULL;
    }
};


void InsertionAtend(Node *&trail,int n){
Node *temp = new Node(n);
trail->next = temp;
trail= temp;
}

void Insertatbetween(Node *track,int n,int pos){
int count=0;
    while(count<pos-1){

        track= track->next ; 
        count++;      
    }
    Node *temp = new Node(n);
    temp->next = track->next;
    track->next = temp;


}
void Inerstionarhead(Node * &head,int n){
     Node *temp = new Node(n);
     temp->next = head;
     head=temp;
}
void print(Node *&head){
    Node *temp = head;
while(temp!=NULL){
    cout<<temp->data<<endl;
temp=temp->next;
}
 }

int main(){

    Node* node1= new Node(10);
     
    Node *head = node1;
    Node *end = node1;
    Inerstionarhead(head,10);
    InsertionAtend(end,30);
    Insertatbetween(head,50,2);
    
    print(head);

}