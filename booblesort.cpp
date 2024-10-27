#include<iostream>
using namespace std;
void buuble(int *arr,int size){
    if(0==size||size==1){
        return ;

    }
   for(int i =0;i<size-1;i++){
    if(arr[i]>=arr[i+1]){
        swap(arr[i],arr[i+1]);
    }

   }
    buuble(arr,size-1);
    
}

int main(){
    int arr[5]={4,3,2,6,8};

    buuble(arr,5);
     for(int i =0;i<5;i++){
        cout<<arr[i];
     }
}