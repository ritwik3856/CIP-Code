#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    int r=3,c=5;
  int mat[r][c]={{5,10,20,30,40},{1,2,3,4,6},{11,13,15,17,19}};
   int min=mat[0][0],max=mat[0][c-1];
   for(int i=0;i<r;i++){
       if(mat[0][0]<min){min=mat[i][0];}
       if(mat[0][c-1]>max){max=mat[0][c-1];}
   }
   int medpos=(r*c+1)/2;
   while(min<max){
       int mid=(min+max)/2;
       int midpos=0;
       for(int i=0;i<r;i++)
           midpos+=upper_bound(mat[i],mat[i]+c,mid)-mat[i];
    if(midpos<medpos)
    min=min+1;
    else
    max=mid;
   }
    cout<<min;
   
    return 0;
}