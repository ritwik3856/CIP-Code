#include<bits/stdc++.h>
using namespace std;

int count_inver_merge(int arr[],int low,int mid ,int high){
    int n1=mid-(low+1),n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){left[i]=arr[low+i];}
    for(int j=0;j<n2;j++){right[j]=arr[mid+1+j];}
    int res=0,i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(right[j]>=left[i]){
        arr[k]=left[i];
        i++;k++;
        }
        else{
            arr[k]=right[j];
            j++;k++;
            res=res+(n1-i);
        }
    }
     while(i<n1){
        arr[k++]=left[i++];
    }
    while(j<n2){
        arr[k++]=right[j++];
    }

    return res;
}
  
int count_inver(int arr[],int low , int high){
   int res=0;
   if(high>low){
       int mid=(low+high)/2;
       res+=count_inver(arr,low,mid);
       res+=count_inver(arr,mid+1,high);
       res+=count_inver_merge(arr,low,mid,high);
   }
   return res;
}

int main() {
    int arr1[]={2,4,1,3,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int low=0,high=n-1;
    cout<<count_inver(arr1,low,high);
    return 0;
}

