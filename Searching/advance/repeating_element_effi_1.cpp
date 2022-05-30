#include<iostream>
using namespace std;

int repeating_ele(int arr[],int n){
    bool visited[n]={0};
    for(int i=0;i<n;i++){
        if(visited[arr[i]])
        return arr[i];
        visited[arr[i]]=true;
    }
    return -1;
}
int main(){
    int arr[]={0,2,1,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<repeating_ele(arr,n);
    return 0;
}