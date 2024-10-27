#include<iostream>
using namespace std;
//
int main(){
int arr[7]={4,5,4,3,5,6,6};
int count;
 for(int i=0;i<7;i++){
   count=0;
    for(int j = 0;j<7;j++){
        
        if(arr[i]==arr[j]){
            count++;
           
        }
        
       
    }
    if(count==1){
        cout<<arr[i];
        return arr[i];
        
    }
   
    
 }   
}