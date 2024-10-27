#include<iostream>

using namespace std;


void saydigit(int n,string arr[]){
if(n==0)
return ;
    int ans= n%10;
    
    n= n/10;
    saydigit(n,arr);
    cout<<arr[ans];

}
int main(){
    string arr[7]={"ZEro","one ","two","three","four","five","six"};
    int say = 111;
    cout<<say;
    saydigit(say,arr);
}