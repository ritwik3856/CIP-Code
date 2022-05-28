#include<iostream>      
using namespace std;


int binary_search(int arr[],int l,int h,int x){
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]>x)
        h=mid-1;
        else
        l=mid+1;
        if(arr[mid]==x)
        return mid;
    }
    return -1;
}
int search_infinite_ar(int arr[],int x){  
  if(arr[0]==x) return 0;
  int i=1;
  while(arr[i]<x)
  i=i*2;
  if(arr[i]==x) return i;
  return binary_search(arr,i/2+1,i-1,x); //getting the range by multiplying by 2 , considering i/2+1 and i-1 as they as checked already.
}


int main(){
    int arr[]={1,2,3,4,6,7,8,9,12,34,56,78,88};
    int x=7;
    cout<<search_infinite_ar(arr,x);
    return 0;
}

// int search_infinite_ar(int arr[],int x){  naive solution
//   int i=0;
//   while(true){
//       if(arr[i]==x) return arr[i];
//       if(arr[i]>x) return -1;
//       i++;
//   }
// }