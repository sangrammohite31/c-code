#include<iostream>
#include<vector>
using namespace std;
 #include <bits/stdc++.h>
//  int maxim(vector<vector<int>> grid,int i){
//     for(int k=0;k<c;i++){
//        int maxi= max(grid[search][k],gird[search][k]);
//        if(maxi>=maxii){
//            posi=search;
//            posj=k;
//        }

        
//     }
//  }
string  issafe(int grid[][4],int i,int c,int j){
    int maxii=0;
    int posi=0;
    int posj=0;
    int search=i+1;
    int loop =j;
    while(loop<c){
         int maxii=0;
    int posi=0;
    int posj=0;
    for(int k=0;k<c;i++){
       int maxi= max(grid[search][k],grid[search][k]);
       if(maxi>=maxii){
           posi=search;
           posj=k;
       }        
    }

    //right diagonal
    if(grid[i+1][j+1]==grid[posi][posj]){
        return "right";

    }
    ///left diagonal
    else if(grid[i+1][j-1]==grid[posi][posj]){
        return "left";

    }
    // down
    else if (grid[i+1][j] == grid[posi][posj]) {
        return "down";
    }
     grid[posi][posj] =0;
        loop++;
    }
    return "null";
}
void solve(int grid[][4],int r,int c,int &output,int i ,int j){

    if(i>r){
        return ;
    }
    int newi=i;
    int newj=j;
   if( issafe(grid,i,c,j)=="right"){
       output=output+ grid[i+1][j+1];
       grid[i+1][j+1]=0;
       
        solve(grid,r,c,output,i+1,j+1);


   }else if( issafe(grid,i,c,j)=="left"){
         output=output+ grid[i+1][j+1];
       grid[i+1][j-1]=0;
        solve(grid,r,c,output,i+1,j-1);

   }else if( issafe(grid,i,c,j)=="down"){
         output=output+ grid[i+1][j+1];
        grid[i+1][j]=0;
         solve(grid,r,c,output,i+1,j);
   }
   

}

int main( ) {
    int grid[3][4]={{2, 3, 1, 2}, {3, 4, 2, 2}, {5, 6, 3, 5}};
    int add =0;
    int i=0;
    int j =0;
    int output=grid[i][j];
    add= add+output;
  int r =3;int  c=4;
    grid[i][j]=0;
   solve(grid,r,c,output,i,j);

   add= add+grid[i][j];

    i=0;
   j=c-1;
   output = grid[i][j];
   add= add+grid[i][j];
   grid[i][j]=0;


   solve(grid,r,c,output,i,j);
   return add;
}