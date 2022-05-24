#include<iostream>
using namespace std;

int stock_sell(int price[],int start,int end){
   int profit=0;
   for(int i=1;i<end;i++){
       if(price[i]>price[i-1]){
           profit+=price[i]-price[i-1];
       }
   }
   return profit;
}
int main(){
    int arr[]={1,5,3,8,12};
    int end=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    cout<<stock_sell(arr,start,end);
    return 0;
}