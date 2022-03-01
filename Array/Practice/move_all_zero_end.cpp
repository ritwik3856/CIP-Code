#include<iostream>
using namespace std;

void movetoend(int arr[],int n) {
    for(int i=0;i<n;i++) {
        if(arr[i]==0) {
            for(int j=i+1;j<n;j++) {
                if(arr[j]!=0) {
                    swap(arr[j],arr[i]);
                }
            }
        }
    }
}
int main(){
    int arr[]={8,5,0,10,0,20};
    movetoend(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;
}