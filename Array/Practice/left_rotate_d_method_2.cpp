#include<iostream>
using namespace std;

void lrotated(int arr[],int n,int d) {
    int temp[d];
    for(int i=0;i<d;i++)
    temp[i]=arr[i];
    for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
    for(int i=0;i<d;i++) 
    arr[n-d+i]=temp[i];
}
int main(){
    int arr[]={1,2,3,4,5};
    int d=3;
    lrotated(arr,5,d);
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}