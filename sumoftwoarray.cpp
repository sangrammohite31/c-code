#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main(){
    int arr1[3]={4,5,1};
    int arr2[2]= {5,1};
    int carry=0;
    int arrl = 2;
    int arr2l=1;
    int sum =0;
int arr3[4];
int k =0;
int i=0,j=0;
    for ( i =arrl, j =arr2l ;i>=0,j>=0;i--,j--){

            int ans =0;
            ans= arr1[i]+arr2[j]+carry;
            
            carry=ans/10;
            sum = ans%10;
            arr3[k]=sum;
            cout<<arr3[k];
            k++; 
            




    }
 


    

}