#include<iostream>
using namespace std;

int main(){
  int nums[4]={1,3,4,5};
        int s =0;
        int end = 3;
        int target =2;
        int mid  =end+s/2;
int si=0;
        while (s<end){
            if(target<nums[mid]){
                si=mid;
                end = mid;
                cout<<si;

            }
            else if(target>nums[mid]){
                si=mid;
                s = mid+1;
            }

            else if(target>nums[si] && target<nums[mid]){
cout<<si;

            }
        }
cout<<si;
    }

