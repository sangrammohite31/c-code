#include<iostream>


using namespace std;
int main(){
   int data[3] ={};
   int count ;
    int arr[4]={2,2,2,1};
    for(int i =0;i<4;i++){
        count=0;

        for(int j=0;j<3;j++){

            if(arr[i]==data[j]){
                break ;
            }
            else{
                for(int k =0;k<4;k++){
                    if(arr[i]==arr[k]){
                        count++;
                        
                    }

                }
                break;
            }
            
            
        }
        
        data[i]=count;
        
        
    }

for(int k =0;k<4;k++){
    cout<<data[k];
}
}
//logic remain

