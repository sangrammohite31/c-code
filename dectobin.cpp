#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // int i =0;
    // int n =10;
    // int show= 0;
    // int sum =0;
    // while(n!=0){
    //     show = n%2;
    //     n = n/2;
        
    //     sum = (show*pow(10,i)+10);
    //     i++;
    //     cout<<show;
       
    // }
    //  cout<<endl<< sum;
   

       
  cout<< "Negative binary repesenttion"<<endl;

  int n =-10;
  if(n>0){
    cout<<"Positive";
  }
  else{
    cout<<"negative ";
    int rem ;
    int i =0;
    int answer=0;
    int newno = n*-1;
    while(newno!=0){

      rem=newno%2;
      
      newno = newno/2;
      answer = (answer*10)+rem;
     
    }
    answer = answer&1;
    cout<<answer;
  
  }
}