#include<iostream>
using namespace std;
bool sortedhmm(int arr[],int size){
    if(size==0)
    return true;
    if(size==1)
    return true;
    if(arr[0]>arr[1]){
        return false;
    }
    sortedhmm(arr+1,size-1);

}
int main(){
    int arr[4]={3,4,9,6};
    int size =4;
    cout<<sortedhmm(arr,size);
}