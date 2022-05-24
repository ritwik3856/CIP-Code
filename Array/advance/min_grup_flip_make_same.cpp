#include<iostream>
using namespace std;

void flip_same(int arr[] , int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0]){
                cout<<"From "<<i<<" to ";
            }
            else
            cout<<i-1;
        }
    }
    if(arr[n-1]!=arr[0])// this is for the last element if array has 1 at last but not ending than this will print
    cout<<n-1<<endl;    //like from 9 printed by the code but no ending then print from 9 to 9.
}
int main(){
    int arr[]={1,0,0,0,1,0,0,1,1,1,1};  // edge case add 0,1 and run.
    int n=sizeof(arr)/sizeof(arr[0]);
    flip_same(arr,n);
    return 0;
}