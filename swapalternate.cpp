#include<iostream>
using namespace std;
int swapp(int arr[],int size){
    int a =0;
    int b =0;
     
        if(size%2==0){
            for (int i =0;i<size;i++){
                a=arr[i];
                b=arr[i+1];
                arr[i]=b;
                cout<<arr[i];
            
                arr[i+1]=a;
                i++;
                
                
            }
            
        }
        else{

        }
    }


int main(){

    int arr[5]={2,3,1,4};
    
        swapp(arr,4);
    


}