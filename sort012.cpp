#include<iostream>
using namespace std;
int main(){

    int arr[7]={0, 1, 0,0, 1  ,1 };
    int i =0;
    int j =6;
while(i<j){
    if(arr[i]==0){
        i++;
       
    }
    if(arr[j]>=1){
        j--;

    }
    if(arr[j]<=arr[i]){
        int swap;
        swap= arr[i];
        arr[i]=arr[j];
        arr[j]=swap;
        i++;
    }
}
 for(int i =0;i<7;i++){
        cout<<arr[i]<<endl;
    }
    
    
}

//tried but not solved                                                           
