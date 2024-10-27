#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
int *arr;
int top;
int size;
Stack(int size){
    this->size = size;
    arr= new int[size];
    top=-1;
}

void  push(int a){
    if(isEmpty()){
        
        arr[++top]= a;
    }

}
void pop(){
    if(isEmpty()){
        cout<<"Bottom";
        
    }else{
        cout<<arr[top--];
        
    }

}
void peek(){
        cout<<arr[top];
}

bool isEmpty(){
    if(top==-1){
        return 1;

    }
    return 0;
}

};



int main(){
 Stack st(5);
 st.push(7);
 st.push(6);
 
 st.peek();

}
