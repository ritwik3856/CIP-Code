#include<iostream>
using namespace std;

void input_ar(int **arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        arr[i][j]=10;
    }
    }
}

int main(){
    int m=3,n=2;
    int **arr;
    arr=new int *[m];
    for(int i=0;i<m;i++)
    arr[i]=new int[n];

   input_ar(arr,m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}