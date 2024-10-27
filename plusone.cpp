 
 #include<iostream>
 using namespace std;


 int main(){
    int digits [4]= {4,2,1,9};
 int i =0;
        int value =0;
        int te[4];
        while(i<3){
            value =value *10 +digits[i];
            i++;
        }
        value =value+1;
       
        int f= 0;
        int temp=0;
        
        while(value/10!=0){
           cout<<"sadfsf";
            temp=value%10;
           te[f]=temp;
            cout<<temp;
            value= value/10;
            f++;



        } 



       
    }
