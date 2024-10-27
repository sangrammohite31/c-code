#include<iostream>

using namespace std;
int main(){
    int arr4[4]={2,2,1,3};

    for(int i =0;i<4;i++){
        for(int j =i+1;j<3;j++){
            if(arr4[i]^arr4[j]==0){
                cout<<arr4[i];
            }
        }
    }
}