#include<iostream>
using namespace std;

const int n=3;

int main(){
                                 //after transpose   after reversing column
    int arr[n][n]={{1,2,3},           //1 4 7         //3 6 9
                   {4,5,6}, // -----> //2 5 8  -----> //2 5 8 
                   {7,8,9}};          //3 6 9         //1 4 7
    
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            swap(arr[i][j],arr[j][i]);

  for(int i=0;i<n;i++){
      int low=0,high=n-1;
      while(low<high){
          swap(arr[low][i],arr[high][i]);
          low++;
          high--;
      }
  }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}   