#include<iostream>
using namespace std;

const int r=3;
const int c=3;
const int n=3;

int main(){

    int arr[r][c]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    
    int temp[n][n];        //last column element becomes the first row.
    for(int i=0;i<n;i++){ //second last column element becomes the second row.
        for(int j=0;j<n;j++){
            temp[n-1-j][i]=arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}   