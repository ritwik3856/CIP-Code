#include<iostream>
using namespace std;


bool sorted ( int arr [], int n ) {
for(int i=0;i<n;i++) {
    if(arr[i+1]<arr[i])
    return false;
}
return true;
}
int main(){
    int arr[]{56,12,15};
    cout<<sorted(arr,3);
    return 0;
}