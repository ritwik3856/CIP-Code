#include<iostream>
using namespace std;

bool sorted ( int arr[] , int n ) {
    for (int i =0;i< n ;i++ ) {
        for(int j=0;j<n ;j++ ) {
            if(arr[i]<arr[j]) 
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]{56,12,15};
    cout<<sorted(arr,3);
    return 0;
}