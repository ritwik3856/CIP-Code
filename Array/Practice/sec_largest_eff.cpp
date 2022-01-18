#include<iostream>
using namespace std;

int seclar(int arr[],int n) {
    int lar=0,res=-1;
    for(int i=1;i<n;i++) {
        if(arr[i]>arr[lar]){
            res=lar;
            lar=i;
        }
        else if(arr[i]!=arr[lar]) {
            if(res==-1 || arr[i]>arr[res]) {
                res=i;
            }
        }

    }
    return res;

}
int main(){
    int arr[]{5,10,12,20};
    cout<<seclar(arr,4);
    return 0;
}