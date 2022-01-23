#include<iostream>
using namespace std;

int seclar(int arr[],int n) {
    int lar=0,slar=-1;
    for(int i=0;i<n;i++) {
        if(arr[i]>arr[lar]){
        slar=lar;
        lar=i;
        }

        else if(arr[i]!=arr[lar])
        {
            if(slar==-1 || arr[i]>arr[slar] ) {
                slar=i;
            }
        }
    }
    return slar;
}
int main(){
    int arr[]{5,10,12,20};
    cout<<seclar(arr,4);
    return 0;
}