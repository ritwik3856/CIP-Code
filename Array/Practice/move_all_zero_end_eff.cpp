#include<iostream>
using namespace std;

void movetoend(int arr[],int n) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0) {
            swap(arr[i],arr[c]);
            c++;
        }

    }
}

int main(){
    int arr[]{10,8,0,0,12,0};
    movetoend(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;
}