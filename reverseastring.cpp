#include<iostream>
using namespace std;

void reversee(char name[]){
for(int i =7;i>=0;i--){
    cout<<name[i];
}
}
int main(){


    char name[8];
    cout<<"input";
    cin>>name;
    reversee(name);


}