#include<iostream>
using namespace std;

int remdup(int arr[],int n ){
    int idx=1;
    for(int i=1;i<n;i++) {
        if(arr[i-1]!=arr[i]){
            idx++;
        }
    }
    return idx;
}
int main(){
    int arr[]={10,20,20,30,30};
    cout<<remdup(arr,5);
    return 0;
}