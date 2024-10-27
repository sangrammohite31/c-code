#include<iostream>
using namespace std;

int fact(int n,int sum,int s){
    if(s>n)
    return sum;

    sum=sum*s;
    
    return fact(n,sum,s+1); ;
}

int main(){
    int g= 7;
    int ans=fact(g,1,1);

    cout<<ans;
}