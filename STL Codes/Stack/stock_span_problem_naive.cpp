#include<iostream>
#include<stack>
using namespace std;


int main(){
    int arr[]={15,13,12,14,16,8,6,4,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int span=1;
        for(int j=i-1;j>=0;j--){
            if(arr[i]>=arr[j])
            span++;
            else 
            break;
        }
        cout<<span<<" ";
    }
    return 0;
}