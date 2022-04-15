#include<iostream>
using namespace std;

template<typename T>
T myMax(T arr[],T n) {
    T res=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>res)
        res=arr[i];
    }
    return res;
}
int main(){
    int arr1[]={12,4,41,16,33};
    cout<<myMax<int>(arr1,5)<<" ";
    float arr2[]={3.5,1.2,64.2,3.3,7.7};
    cout<<myMax<float>(arr2,4);
    return 0;
}