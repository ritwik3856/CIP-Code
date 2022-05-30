#include<iostream>
using namespace std;

double get_median(int arr1[],int arr2[],int n1,int n2){
  int begin=0,end=n1;
  while(begin<=end){

      int i1=(begin+end)/2;
      int i2=(n1+n2+1)/2-i1;

      int min1=(i1==n1)?INT_MAX:arr1[i1];
      int max1=(i1==0)?INT_MIN:arr1[i1-1];
      int min2=(i2==n2)?INT_MAX:arr2[i2];
      int max2=(i2==0)?INT_MIN:arr2[i2-1];

      if(min1>=max2 && min2>=max1){
          if((n1+n2)%2==0) //for even 2 middle element avg.
          return ((max(max1,max2)+min(min1,min2))/2); //max of left part and min of right part
          else
          return max(max1,max2); //only single element 
      }

      else if(max1>min2)
      end=i1-1; //left part of 1st greater than right part of 2nd so decreasing the array and going to left part of 1st.
      else
      begin=i1+1; //left part of 2nd greater than right part of 1st so going to right of 1st array .
  }
  return -1;
}
int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={10,20,30,40,50};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
   
    cout<<get_median(arr1,arr2,n1,n2);

    return 0;
}