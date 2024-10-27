#include<iostream>
using namespace std;
int getsum(int arr[],int size){
    if(size==0)
    return 0;
    int sum = arr[0]+getsum(arr+1,size-1);
    return sum;
}
int main(){
    int arr[5]={3,2,5,1,6};
    cout<<getsum(arr,5);
}