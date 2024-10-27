#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    if(arr[0]==key){
        return true;


    }
    if(size==0){
        return false;
    }
   
    return  linearsearch(arr+1,size-1,key);
}

int main(){
      int arr[5]={3,2,5,1,6};
      int key =67;
      int size=5;
      cout<<linearsearch(arr,size,key);
}