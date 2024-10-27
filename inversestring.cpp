#include<iostream>
using namespace std;
void revers(string hh,int size,int i){
    if(size==-1 )
    return ;
   
    cout<<hh[size];
    revers(hh,size-1,i);

i++;
    
    

}
int main(){
    string hh= "abcde";


    revers(hh,5,0);
}