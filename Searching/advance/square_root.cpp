#include<iostream>      
using namespace std;

int sq_r(int x){
   int l=0,h=x,ans=-1;
   while(l<=h){
       int mid=(l+h)/2;
       int mq=mid*mid;
       if(mq>x)
       h=mid-1;
       else{
       l=mid+1;
       ans=mid;
       }
       if(mq==x)
       return mid;
   }
   return ans;
}
int main(){
    int x=14;
    cout<<sq_r(x);
    return 0;
}