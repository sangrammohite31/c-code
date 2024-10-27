#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str="Move#Hash#to#Front";
   string str1="";
    string str2="";

    int j=0;
    for(int i =0;i<19;i++){
        if(str[i]=='#'){
           str1 +="#";

        }else{
            str2 +=str[i];

        }
    }

cout<<str1+str2;

}