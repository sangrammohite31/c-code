#include<iostream>
using namespace std;

 void twoSum(int arr[], int target, int n)
{int s=0;
	if(s>n){
		return  ;
	}
    cout<<"hii";
	int i=1;
	while(i<n){
		if(arr[s]+arr[i]==target){
			
			cout<<arr[s];
            cout<<arr[i];
            return;
		}
		i++;
	}
	twoSum(arr+1,target,n-1);

	// retwosum(arr,target,n);
}

int main(){
    int arr[5]={4,5,3,6,1};
    twoSum(arr,11,5);

}