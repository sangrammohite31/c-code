#include<iostream>
using namespace std;

int main(){

    char a[14]="sangrammohite";
    int i =0;int j=0;
    int count=0;
    int tra=0;
    for(i;i<7;i++){
        if(count>=0&&count<3){
            count++;
        for(j;j<3;j++){
cout<<a[tra++]<<endl;

            }

        }
        else{
            while(count!=0){
                
            for(j;j>0;j--){
            cout<<a[tra++];

            }
            count--;
            }
           

        }
       
    }
}