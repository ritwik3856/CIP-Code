#include<iostream>
using namespace std;

// void freq_sorted(int arr[] , int n){
//     int temp=arr[0],freq=1;
//      for(int i=1;i<n;i++){
//         if(temp==arr[i] )
//         freq++;
//         else {
//         cout<<arr[i-1]<<" "<<freq<<endl;
//         temp=arr[i];
//         freq=1;
//         }
//     }
//     cout<<temp<<" "<<freq<<endl;
// }
void freq_sorted(int arr[],int n){
  int freq=1,i=1;
  while(i<n){
      while(arr[i]==arr[i-1] && i<n){
          freq++;
          i++;
      }
      cout<<arr[i-1]<<" "<<freq<<endl;
      i++;
      freq=1;
  }
  if(arr[n-1]!=arr[n-2] || n==1) //to print last digit freq if its freq is 1 or to print only one element in array. 
  cout<<arr[n-1]<<" "<<1;
}
int main(){
    int arr[]={10,10,10,25,25,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    freq_sorted(arr,n);
    return 0;
}