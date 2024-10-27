#include<iostream>
using namespace std;
void insertion(int *arr,int size){
    if(0==size||1==size)
    return;
    int minindex=0;
    for(int i=1;i<size;i++){
        
        if(arr[i]<arr[minindex]){
            minindex=i;



        }
        

    }
    swap(arr[minindex],arr[0]);
    insertion(arr+1,size-1);
}
int main(){
    int arr[5]={9,8,2,3,5};

    insertion(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}