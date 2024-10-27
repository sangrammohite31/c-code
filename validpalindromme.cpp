#include<iostream>
using namespace std;

bool valid(char v){
    if((v>='a'&&v<='z')||(v>='A'&&v<='Z')){
        return 1;
    }
    return 0;


}
char tolower(char vv){
    if(vv>='a'&&vv<='z'){
        return vv;
    }else{
        return vv-'A'+'a';
    }
}
bool palindrome(string plain){
    int s =0;

    int e=plain.length()-1;
    while(s<e){
        if(plain[s]!=plain[e]){
            return false;

        }
    }
    return true;
}

   
   
int main(){
    string s ="A man, a plan, a canal: Panama";
      string temp ="";
    
     for(int j =0;j<s.length();j++){
        cout<<s[j];

        if(valid(s[j])){
            
            temp.push_back(tolower(s[j]));
            
        }
     }  
      return palindrome(temp);
}




    