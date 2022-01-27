#include<iostream>
using namespace std;

void freq(int arr[],int n)  {
    for(int i=0;i<n;i++) {
        bool flag=false;
        for(int j=0;j<i;j++) {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        continue;
        int c=1;
        for(int j=i+1;j<n;j++) 
            if(arr[i]==arr[j])
            c++;
            cout<<arr[i]<<" "<<c<<endl;
        }
    }

int main(){
    int arr[]{10,12,10,15,10,20,12,12};
    int n =sizeof(arr)/sizeof(arr[0]);
    freq(arr,n);
    return 0;
}