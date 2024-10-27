#include<iostream>
using namespace std;

int main(){
int n=9 ;
int s = 1;
int end=n;
int mid = s+end/2;
int ans=0;
while(s<end){
    if(mid*mid==n){
        return mid;
    }
    else if(mid*mid>n){
        end = mid;
       
        
    }
    else{
        ans = mid;
      
        s=mid+1;

    }
    mid=s+end/2;
}
cout<< ans;


}