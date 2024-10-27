#include <iostream>
using namespace std;

// void recursiveFunction() {
//     static int count = 0;  // This variable will retain its value between calls
//     cout << "Call count: " << count << endl;
//     count++;  // Increment the count after each call

//     if (count < 5) {
//         recursiveFunction(); 
//         // Recursive call
//     }
// }

// void fun(int *p) 
// { 
//   int q = 10; 
//   p = &q; 
//   cout<<*p;
// }     
  
  int fun(int x){
    int xsw=x;
    if(xsw==5){
      return 1;
    }

    xsw =xsw + fun(x+1);
    return xsw;
  }
int main() 
{ 
  int su = 0;
  int s= fun(su);
  cout<<s;
}

// int main() {
//     // recursiveFunction();
//     // return 0;
// //     int m = 0;
// //     int i =0;
// //     int t= 0;
// //     int n =7;
// //     int *a =&n;
// // //     while(i!=10){
// // // if(m>=n){
// // //     break;
// // // }else{ 
// // //     t = t+m;
// // //     m+=1;
// // // }

// // //     }
// // // cout<<a<<endl;
// // // cout<<&a<<endl;
// // // cout<<*a<<endl;
// // // *&a = &i;
// // cout<<40*35/20<<endl;
// // cout<<40*35/20-10<<endl;
// // cout<<40*35/(20-10);

// // cout<<36/1;


// // int a =4;
// // int b =2;
// // // int n = a^b;
// // // cout<<n;
// // if((printf(""))){
// //     cout<<"dnasdbas";
// // }
// // else{
// //     cout<<a++<<++b;
// // }
// }


