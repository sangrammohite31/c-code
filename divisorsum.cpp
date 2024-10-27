#include <iostream>
#include<vector>

using namespace std;
 int main(){
        vector<int> temp;
        int ans=0;
    int n;
    cout<<"Enter the value";
    cin>>n;
    for(int i  =1;i<=n;i++){
        if(n%i==0){
            temp.push_back(i);

        }

    }
    for(auto j:temp){
        ans +=j;
    }
    cout<<ans;
 }