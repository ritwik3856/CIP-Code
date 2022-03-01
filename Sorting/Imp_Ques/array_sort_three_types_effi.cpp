 #include<bits/stdc++.h>
using namespace std;

void three_type_sort(int arr[],int n){
 int low=0,high=n-1,mid=0;
 while(mid<=high){
     if(arr[mid]==0){
         swap(arr[mid],arr[low]);
         low++;
         mid++;
     }
     else if(arr[mid]==1){
         mid++;
     }
     else{
         swap(arr[mid],arr[high]);
         high--;
     }
 }
}

int main() {
    int arr1[]={0,1,1,2,0,1,1,2};
    int n=sizeof(arr1)/sizeof(arr1[0]);
   three_type_sort(arr1,n);
   for(int x:arr1)
   cout<<x<<" ";
    return 0;
} 
