#include<iostream>
using namespace std;

// class heap{
//     public:
//     int arr[100];
//         int size=0;
//         heap(){arr[0]=-1;
//         size=0;}
//     void insertion(int val){
//             size = size +1;
//             int index=size;
//             arr[index]=val; 

//             while(index>1){
//                 int parent =index/2;
//                 if(arr[parent]<arr[index]){
//                     swap(arr[parent],arr[index]);
//                     index= parent;
//                 }else{
//                     return ;
//                 }
//             }
//     }
//     void print(){
//         for(int i=1;i<=this->size;i++){
//             cout<<arr[i]<<endl;

//         }
//     }
//     void deletion(){
//         if(size==0){
//             return ;
//         }
//         arr[1]=arr[size];
//         size--;

//     int i =1;
//     while(i<size){
//         int lefft = 2*i;
//         int right =2*i+1;
//         if(lefft<size && arr[i]<arr[lefft
//         ]){
//             swap(arr[i],arr[lefft]);
//             i= lefft;
//         }
//         else if (right<size&& arr[i]<arr[right]){
//             swap(arr[i],arr[right]);
//             i=right;
//         }else{
//             return;
//         }
//     }
//     }
// };
int main(){
//    heap h;
//    h.insertion(50);
//    h.insertion(55);
//     h.insertion(53);
//      h.insertion(52);
//       h.insertion(54);
//       h.deletion();
// h.print();

int arr[5] = {1,2,3,4,5};

int *p;
*&p=arr;

cout<<<<*p;



}