#include<iostream>
using namespace std;


int getlar(int arr[],int n) {
    int lar=arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]>=lar){
            lar=arr[i];
        }
    }
    return lar;


}
int seclar(int arr[],int n) {
    int lar;
    lar=getlar(arr,n);
    int seclar=arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]>seclar && arr[i]<lar)
        seclar=arr[i];
    }
    return seclar;

}

int main(){
    int arr[]{5,20,12,20,10};
    cout<<seclar(arr,5);
    return 0;
}