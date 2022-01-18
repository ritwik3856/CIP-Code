#include<iostream>
using namespace std;

int getlar(int arr[],int n) {
    int lar=0;
    for(int i=0;i<n;i++) {
        if(arr[i]>arr[lar])
        lar=i;
    }
    return lar;
}

int seclar(int arr[],int n ) {
    int lar=getlar(arr,n);
    int res=-1;
    for(int i=0;i<n;i++) {
        if(arr[i]!=arr[lar]) {
            if(res==-1) 
            res=i;
            else if(arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}
int main(){
    int arr[]{5,20,12,20,10};
    cout<<seclar(arr,5);
    return 0;
}