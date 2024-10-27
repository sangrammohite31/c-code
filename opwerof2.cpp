#include<iostream>
using namespace std;

int main(){

   int num =4;
   int count=0;
while(num){
    count+=num&1;
    num=num>>1;
    
}
if(count==1){
    cout<<"number is power of 2";
}

}