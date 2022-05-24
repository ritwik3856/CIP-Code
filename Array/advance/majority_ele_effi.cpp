/*     *******Moores Voting Algo**********
This algorithm works on the fact that if an element occurs more than N/2 times, it means that the remaining
elements other than this would definitely be less than N/2. So let us check the proceeding of the algorithm.

First, choose a candidate from the given set of elements if it is the same as the candidate element, increase the votes.
 Otherwise, decrease the votes if votes become 0, select another new element as the new candidate.
*/
#include<iostream>
using namespace std;

void majority_ele(int arr[] , int n){
 int res=0,count=1;
 for(int i=1;i<n;i++){    //moore's voting algo
     if(arr[res]==arr[i])
     count++;
     else 
     count--;
     if(count==0)
     {
         res=i;
         count=1;
     }
 }
    count=0;
     for(int i=0;i<n;i++)
         if(arr[res]==arr[i])
         count++;
    
     if(count<=n/2)
     res=-1;

 cout<<arr[res];
}
int main(){
    int arr[]={8,3,4,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    majority_ele(arr,n);
    return 0;
}