#include<iostream>
using namespace std;

int remdup(int arr[],int n) {
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++) {
        if(temp[res-1]!=arr[i]) {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=1;i<res;i++){
        arr[i]=temp[i];
    }
    return res;
    }
int main(){
    int arr[]={10,20,20,30,30};
    cout<<remdup(arr,5);
    return 0;
}