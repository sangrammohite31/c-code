#include<iostream>
using namespace std;
int sort(){}
int main(){
int arr[5]={2 ,-3, 3, 3, -2};
int arr3[6]={};

for(int i =0;i<5;i++){
    for(int j =i+1;j<5;j++){
        if(arr[i]+arr[j]==0){
          
            if(arr[i]>arr[j]){
                cout<<arr[j]<<arr[i]<<endl;
            }
            else{
                  cout<<arr[i]<<arr[j]<<endl;
            }
            
        }
        
    }
}

}